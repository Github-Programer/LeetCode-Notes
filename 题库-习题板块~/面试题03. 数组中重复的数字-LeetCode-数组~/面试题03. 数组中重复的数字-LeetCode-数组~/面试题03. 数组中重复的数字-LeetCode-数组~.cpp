// 面试题03. 数组中重复的数字-LeetCode-数组~.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <vector>
#include "Solution.h"

int main()
{
    int n, t;
    std::vector <int> aData;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> t;
        aData.push_back(t);
    }
    Solution con;
    int aNum = con.findRepeatNumber(aData);
    std::cout << aNum << endl;
    std::cout << "Hello World!\n";
    return 0;
}

