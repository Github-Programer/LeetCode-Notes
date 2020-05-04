#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main(int argc, char** argv) {
	vector <int> nums;
	Solution con;
	int n, target;
	cin >> n;
	//DONE:输入，输入进向量 
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}
	cin >> target;
	cout << "LOOP:over cin" << endl;
	int ansNum = con.findKthLargest(nums, target);
	cout << "ansNum = " << ansNum << endl;
	return 0;
}
