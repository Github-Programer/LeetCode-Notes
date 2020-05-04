// 字符串反转-力扣-vector动态数组~.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include "cvector.h"
#include "Solution.h"

int main()
{
    std::vector <char> str;
    std::string s;
    getline(std::cin, s);
    Vgetline(str, s);
    Solution con;
    con.reverseString(str);
    for (int i = 0; i < str.size(); i++) {
        std::cout << str[i];
    }
    std::cout << "\n";
#pragma region Hello world
    std::cout << "Hello World!" << "\n";
#pragma endregion
    return EXIT_SUCCESS;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
