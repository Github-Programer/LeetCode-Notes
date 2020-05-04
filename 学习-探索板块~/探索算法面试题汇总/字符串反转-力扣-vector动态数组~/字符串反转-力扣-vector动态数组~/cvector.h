#pragma once
#include <string>
#include <vector>
using namespace std;

void Vgetline(vector<char>& aVec, string aStr) {
    for (int i = 0; i < aStr.size(); i++) {
        aVec.push_back(aStr[i]);
    }
}