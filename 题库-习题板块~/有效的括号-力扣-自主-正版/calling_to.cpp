#include <iostream>
#include <stack>
#include <string>

#include <cstdlib>

#include "stack.h"
#define EXIT_SUCCES 0
#define init int

using namespace std;


int main(void)
{
    init MAXN = 999;
    Solution _isV;
    string s;
    getline(cin, s);
    bool answer;
    answer = _isV.isValid(s);
    switch(answer)
    {
        case true:{
            cout << "true" << endl;
            break;
        }
        case false:{
            cout << "false" << endl;
            break;
        }
    }
    return EXIT_SUCCESS;
}