#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> printNumbers(int n)
    {
        int po = pow(10, n);
        vector<int> ans;
        for (int i = 1; i < po; i++)
        {
            ans.push_back(i);
        }
        return ans;
    }
};