#pragma once
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int flag[MAXN];
        memset(flag, false, sizeof(flag));
        for (int i = 0; i < nums.size(); i++)
            if (flag[nums[i]])
                return nums[i];
            else
                flag[nums[i]] = true;
        return -1;
    }
};