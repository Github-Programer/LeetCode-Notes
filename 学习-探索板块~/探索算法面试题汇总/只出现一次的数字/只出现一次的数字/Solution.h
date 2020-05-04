#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i, cur;
        int len = nums.size();

        sort(nums.begin(), nums.end());//进行快速排序，得到例如1，1，3，3，2

        for (i = 0; i < len; i = i + 2)//每次后移两个位置
        {
            cur = nums[i];
            if (i == len - 1)  //如果遍历到最后一个元素,说明该元素为single number
                return cur;
            if (cur != nums[i + 1])//如果当前元素不等于后一个元素即为single number
                return cur;

        }
        return -1;
    }
};

