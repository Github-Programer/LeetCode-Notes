#include <iostream>
#include <string>
#include <cmath>
//#define str string // python str
using namespace std; 

bool check(string s)
{
    int length = s.size();
    int inx = length / 2;
    for(int i = 0; i < inx; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            continue;
        else
        {
            return false;
        }
    }
    return true;
}
