#include <iostream>
#include <vector>
#include "Solution.cpp"
#include <string>

using namespace std;

int main()
{
    Solution CC;
    string lib[1001]; //最多1000个人
    int n, m;
    cin >> n >> m; //输入n-人数，m-步数
    for (int i = 0; i < n; i++)
        cin >> lib[i];
    string ans = CC.lastRemaining(n, m, lib);
    cout << "-----winner is:-----" << endl;
    cout << ans << endl;
    return 0;
}