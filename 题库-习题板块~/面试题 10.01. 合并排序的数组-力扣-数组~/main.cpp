#include <iostream>
#include <vector>
#include "Solution.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	void input(int size, vector<int>& aData) {
		for (int i = 0; i < size; i++) {
			int temp;
			cin >> temp;
			aData.push_back(temp);
		}
	}
int main(int argc, char** argv) {
	int n, m;
	int tn, tm;
	vector<int> data1;
	vector<int> data2;
	cin >> n >> m;
	input(n, data1);
	input(m, data2);
	Solution con;
	vector<int> answer;
	con.merge(data1, n, data2, m);/*
	for (int i = 0; i < answer.size(); i++) {
		cout << answer << " ";
	}*/
	for (int i = 0; i < data1.size(); i++) {
		cout << data1[i] << " ";
	}
	cout << endl;
	return 0;
}
