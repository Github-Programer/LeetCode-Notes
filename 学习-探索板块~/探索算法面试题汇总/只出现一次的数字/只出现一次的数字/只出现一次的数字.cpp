/*
类型：题库
来源：力扣-探索-面试题汇总
题目：只出现一次的数字
文件:{
main.cpp
singleNumber.h
}
*/


#include <iostream>
#include <vector>

#include "Solution.h"

int main()
{
    std::vector <int> Array;
    int n, t;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> t;
        Array.push_back(t);
    }
    Solution con;
    int ans = con.singleNumber(Array);
    cout << ans << endl;
    return EXIT_SUCCESS;
}



