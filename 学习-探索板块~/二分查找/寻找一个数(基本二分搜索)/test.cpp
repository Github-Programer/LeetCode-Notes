#include <iostream>

using namespace std;

int binarySearch(int nums[], int target, int length)
{
    int left = 0;
    int right = length - 1; //import

    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else if (nums[mid] > target)
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int n, target;
    int aData[1001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> aData[i];
    }
    cin >> target;
    int answer = binarySearch(aData, target, n);
    cout << answer << endl;
    return 0;
}
