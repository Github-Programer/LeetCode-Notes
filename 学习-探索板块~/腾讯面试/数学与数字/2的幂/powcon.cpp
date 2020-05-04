#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution con;
    int n;
    cin >> n;
    bool ansMark = con.isPowerOfTwo(n);
    if (ansMark == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}