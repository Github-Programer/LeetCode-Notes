#include <iostream>
#include <string>
#include <vector>
#define init int
#define huge long
#include "stdlib.h"
#include "check_end.h"
#include <cstdlib>

using namespace std;

int main(void)
{
    string str1;
    getline(cin, str1);
    init length = str1.size();
    long long int book[10];
    book[0] = book[1] = book[2] = 0;
    /*
    book[0] -> '('
    book[1] -> '{'
    book[2] -> '['
    */
    for(int i = 0; i < length; i++)
    {
        if(str1[i] == '(')
            book[0]++;
        else if(str1[i] == ')')
            book[0]--;
        if(str1[i] == '{')
            book[1]++;
        else if(str1[i] == '}')
            book[1]--;
        if(str1[i] == '[')
            book[2]++;
        else if(str1[i] == ']')
            book[2]--;
    }
    if(book[0] == 0 && book[1] == 0 && book[2] == 0)
    {
        bool ans = false;
        ans = check(str1);
        if(ans){
            cout << "true" << endl;
            return EXIT_SUCCESS;
        }
        else{
            cout << "false" << endl;
            return EXIT_SUCCESS;
        }
    }
    else 
        cout << "false" << endl;
    return EXIT_SUCCESS;
}
