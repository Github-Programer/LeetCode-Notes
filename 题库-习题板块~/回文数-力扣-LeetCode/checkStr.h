#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    string int2str(int aNum){
        stringstream res;
        res << aNum;
        string s;
        res >> s;
        return s;
    }
    bool isPalindrome(int x) {
        string ans = int2str(x);
        int length = ans.size();
        string s1, s2;
        s1 = s2 = "";
        for(int i = length - 1; i >= 0; i--)
            s1 += ans[i];
        for(int i = 0; i < length; i++)
            s2 += ans[i];
        if(s1 == s2)
            return true;
        else
            return false;
    }
};