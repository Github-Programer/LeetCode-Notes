#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int min=(1<<31);
        unsigned max=(unsigned)min-1;
        if(x==min) return 0;//特殊条件，int型最小值在int范围内没有对应的绝对值
        int tmp=abs(x);//取绝对值
        stringstream str;
        str<<tmp;
        string s="";
        str>>s;
        std::reverse(s.begin(),s.end());//反转整数字符串
        str.str("");
        str.clear();
        str<<s;
        int up=(x>=0)?1:-1;//判断符号位
        //为防止超出int范围，用long long保存
        long long ans;
        str>>ans;
        //与最大值进行比较判断是否溢出
        if(ans>max) return 0;
        else return (int)(ans*up);
        
        return 0;
    }
};