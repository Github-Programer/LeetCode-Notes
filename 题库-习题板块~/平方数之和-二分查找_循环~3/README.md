这道题在数学这个汇总里面是标记最简单的，我一开始打算作为热身练习的，结果困难重重。

1、C++：超出int范围！

第一次的代码是这样的！
```cpp
int ps(int aNum) {
    return aNum * aNum;
}
bool judgeSquareSum(int c) {
    int i, j;
    for (i = 0; i <= c; i++)
        for (j = 0; j <= c; j++)
            if (ps(i) + ps(j) == c) {return true;}
    
    return false;
}
```
然后显而易见，报错
```
21 / 124 个通过测试用例
状态：执行出错
提交时间：0 分钟之前
执行出错信息：
Line 2: Char 17: runtime error: signed integer overflow: 46341 * 46341 cannot be represented in type 'int' (solution.c)
最后执行的输入：
100000
```
是什么？int超出界限了。

那么改成longlong！

2、longlong超时！

第二次代码如下：
```cpp
long long ps(long long aNum) {
    return aNum * aNum;
}
bool judgeSquareSum(int c) {
    int i, j;
    for (i = 0; i <= c; i++)
        for (j = 0; j <= c; j++)
            if (ps(i) + ps(j) == c) {return true;}
    
    return false;
}
```
一开始自信满满的提交了，结果报错出现了！
```
25 / 124 个通过测试用例
状态：超出时间限制
提交时间：0 分钟之前
最后执行的输入：
1000000000
```
好吧，既然longlong超时，那么就把双重循环缩短点

3、for循环缩短再次超时

```cpp
long long ps(long long aNum) {
    return aNum * aNum;
}
bool judgeSquareSum(int c) {
    long long i, j;
    for (i = 0; i * i <= c; i++)
        for (j = 0; j * j <= c; j++)
            if (ps(i) + ps(j) == c) {return true;}
    
    return false;
}
```
这次的for循环缩短了很多，但是还报错！:rage:

力扣！你要拿我怎么滴？？
```
98 / 124 个通过测试用例
状态：超出时间限制
提交时间：0 分钟之前
最后执行的输入：
2147482647
```
那么没辙了吗，不，要施展我的绝招了！

我打算在Java上面试试，我对C++没信心了……

这个绝招是——二分查找！
```java
public class Solution {
    public boolean judgeSquareSum(int c) {
        for (long a = 0; a * a <= c; a++) {
            int b = c - (int)(a * a);
            if (binary_search(0, b, b))
                return true;
        }
        return false;
    }
    public boolean binary_search(long s, long e, int n) {
        if (s > e)
            return false;
        long mid = s + (e - s) / 2;
        if (mid * mid == n)
            return true;
        if (mid * mid > n)
            return binary_search(s, mid - 1, n);
        return binary_search(mid + 1, e, n);
    }
};
```
哎呀通过啦！那么有没有别的方法呢？Python也是我新学的语言呀

来，双指针了解一下——
```python
class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        i,j=0,int(c**0.5)
        while i<=j:
            if i*i+j*j==c:
                return True
            elif i*i+j*j>c:
                j-=1
            elif i*i+j*j<c:
                i+=1
        return False
```
哎呀又通过啦！

高兴:smile: