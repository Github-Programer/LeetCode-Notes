#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    string s;
    cin >> s;
    Solution C;
    string ans = C.reorganizeString(s);
    cout << ans << endl;
    return 0;

}