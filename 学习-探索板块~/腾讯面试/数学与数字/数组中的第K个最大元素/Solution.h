#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	void outPut(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++) {
			cout << nums[i] << " ";
		}
		
	}
    int findKthLargest(vector<int>& nums, int k) {
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[i] < nums[j]) {
					swap(nums[i], nums[j]);
				}
			}
		}
		cout << "LOOP:vector sort" << endl;
		outPut(nums);
		int t;
		for (t = 0; t < k - 1; t++){
			
		}
		return nums[t];
    }
};
