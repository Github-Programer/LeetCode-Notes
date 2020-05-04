#include <iostream>
#include "Solution.h"
#include <string>

int main()
{
    Solution con;
    std::string str;
    std::cout << "input:> " << "\n";
    getline(std::cin, str);
    //空串也算回文串
    //空格不算做字符测量
    //不算大小写字母
    bool mark = con.isPalindrome(str);
    if (mark)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    return EXIT_SUCCESS;
}