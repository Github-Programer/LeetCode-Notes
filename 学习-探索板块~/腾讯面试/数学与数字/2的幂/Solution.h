#include <iostream>
#include <math.h>

using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int i = 0;
        while (pow(2, i) < n)
        {
            i++;
        }
        if (pow(2, i) == n)
            return true;
        else
            return false;
    }
};
