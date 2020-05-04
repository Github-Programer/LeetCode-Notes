// 判定字符是否唯一-LeetCode-字符串、bool~.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include "Solution.h"
int main()
{
    std::string str;
    getline(std::cin, str);
    Solution con;
    bool mark = con.isUnique(str);
    std::cout << int(mark) << "\n";
    return EXIT_SUCCESS;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
