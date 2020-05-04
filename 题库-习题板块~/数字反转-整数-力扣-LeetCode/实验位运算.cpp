#include <iostream>
#define EXIT_SUCCESS 0
#include "stdlib.h"

#include <cstdio>

using namespace std;

int main()
{
    int min = 1 << 31;
    unsigned max = (unsigned)min - 1;
    cout << min << endl;
    cout << max << endl;
    return EXIT_SUCCESS;
}