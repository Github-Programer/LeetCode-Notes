#include <stdio.h>
#include <math.h>
using namespace std;
bool binarySearch(int start, int end, int target)
{
    int left = start, right = end, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (mid == target)
            return true;
        else if (mid < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}
bool judgeSquareSum(int c) {
    long long i, j;
    for (i = 0; pow(i, 2) <= c; i++) // 5
    {}
    
    return false;
}
int main(void) {
    int c;
    scanf ("%d", &c);
    bool ans = judgeSquareSum(c);
    printf ("%d\n", int(ans));
    return 0;
}