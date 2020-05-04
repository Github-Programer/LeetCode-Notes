#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isUnique(string astr) {
        string str;
        for (int i = 0; i < astr.size(); ++i) {
            if (str.find(astr[i]) != string::npos) return false;
            str.push_back(astr[i]);
        }
        return true;
    }
};

