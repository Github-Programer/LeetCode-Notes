// 字符串中的第一个唯一字符-字符串~.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include "Solution.h"

int main()
{
    std::string s;
    getline(std::cin, s);
    std::cout << "Hello World!\n";
    Solution con;
    int index = con.firstUniqChar(s);
    cout << index << endl;
    return EXIT_SUCCESS;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
