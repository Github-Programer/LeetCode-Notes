#pragma once
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s)
    {
        int arr[26];
        memset(arr, 0, sizeof(arr));
        for (auto c : s)
            arr[c - 'a']++;
        for (int i = 0; i < s.length(); i++)
            if (arr[s[i] - 'a'] == 1) return i;
        return -1;
    }
};

