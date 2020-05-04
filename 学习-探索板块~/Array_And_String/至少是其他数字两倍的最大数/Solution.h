class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 0) return -1;
        if (nums.size() == 1) return 0;
        int max_index = 0;
        bool flag = true;
        for (int i=1;i<nums.size();i++){
            if (nums[max_index] > nums[i]){
                if (flag)
                    flag = nums[max_index] >= 2 * nums[i];
            }
            else{
                flag = nums[i] >= 2 * nums[max_index];
                max_index = i;
            }

        }
        if (!flag) return -1;
        else return max_index;
    }
};
