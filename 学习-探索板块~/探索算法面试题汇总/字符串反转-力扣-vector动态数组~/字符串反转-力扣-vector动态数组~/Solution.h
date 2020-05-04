#pragma once
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int midLength = s.size() / 2 - 1;
        for (int i = 0; i <= midLength; i++)
        {
            char cc = s[i];
            s[i] = s[s.size() - i - 1];
            s[s.size() - i - 1] = cc;
        }
    }
};

