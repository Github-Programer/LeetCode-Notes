#include <iostream>
#include <vector>

#include "TwoNum.h"

using namespace std;

int main()
{
    Solution s;
    extern vector <int> nums;
    int n, t, target;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        nums.push_back(t);
    }
    cin >> target;
    int un1, un2;
    un1, un2 = s.twoSum(nums, target);
    return 0;
}