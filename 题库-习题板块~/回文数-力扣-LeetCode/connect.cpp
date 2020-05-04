#include <iostream>
#include "checkStr.h"

using namespace std;

int main()
{
    Solution call;
    bool ans;
    long long int callNum;
    cin >> callNum;
    ans = call.isPalindrome(callNum);
    switch(ans)
    {
        case true:{
            cout << "TRUE" << endl;
            break;
        }
        case false:{
            cout << "FALSE" << endl;
            break;
        }
    }
    return 0;
}