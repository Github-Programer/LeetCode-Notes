#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    void StrLittle(string &str) {
        int length = str.size();
        for (int i = 0; i < length; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
    }
    bool isPalindrome(string s) {
        StrLittle(s);
        cout << "Be StrLittle:" << s << endl;
        string str1;
        str1 = "";
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
                str1 += s[i];
            else
                str1 += "";
        cout << "str1=" << str1 << endl;
        string str2 = str1;
        reverse(str2.begin(), str2.end());
        cout << "reversed s:" << s << endl;
        if (str2 == str1)
            return true;
        else
            return false;
    }
};

