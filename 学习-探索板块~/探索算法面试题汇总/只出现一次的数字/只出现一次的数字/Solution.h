#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i, cur;
        int len = nums.size();

        sort(nums.begin(), nums.end());//���п������򣬵õ�����1��1��3��3��2

        for (i = 0; i < len; i = i + 2)//ÿ�κ�������λ��
        {
            cur = nums[i];
            if (i == len - 1)  //������������һ��Ԫ��,˵����Ԫ��Ϊsingle number
                return cur;
            if (cur != nums[i + 1])//�����ǰԪ�ز����ں�һ��Ԫ�ؼ�Ϊsingle number
                return cur;

        }
        return -1;
    }
};

