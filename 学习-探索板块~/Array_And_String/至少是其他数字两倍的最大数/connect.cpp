#include <iostream>
#include "Solution.h"
#include <vector>

using namespace std;

int main()
{
    Solution con;
    vector<int> aData;
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        int temp;
        cin >> temp;
        aData.push_back(temp);
    }
    int ansIndex = con.dominantIndex(aData);
    cout << "Answer Index = " << ansIndex << endl;
    return 0;
}
