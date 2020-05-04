#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	void outa(vector<int>a) {
		cout << "a:" << endl;
		for (int i = 0; i < a.size(); i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	void addVector(vector<int> a, vector<int> b) {
		while (!b.empty()) {
			int temp = b.back();
			b.pop_back();
			a.push_back(temp);
		}
		outa(a);
	}/*
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int ansSize;
        ansSize = m + n;
        outa(A);
		outa(B); 
        cout << "up add" << endl;
        addVector(A, B);
        cout << "a.size = " << A.size() << endl; 
        //TODO:sort
        cout << "up sort" << endl; 
        for (int i = 0; i < A.size(); i++) {
        	for (int j = i + 1; j < A.size(); j++) {
        		if (A[i] > A[j]) {
        			swap(A[i], A[j]);
				}
			}
		}
		for (int i = 0; i < A.size(); i++) {
			cout << A[i] << " ";
		}
    }*/
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        for (int i = 0; i <= n; i++) {
        	temp = B[i];
        	A.push_back(temp);
			//A[m + i] = B[i];
        }
        sort(A.begin(), A.end());
        outa(A);
    }
};
