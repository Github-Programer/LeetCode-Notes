#include <vector>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Solution {
public:
    string lastRemaining(int n, int m, string lib[])
    {
        bool que[1001];//定义一个数组表示布尔值
        for (int i = 0; i <= n; i++)
            que[i] = false;
/*
        for (int i = 0; i < n; i++)
            cout << int(que[i]) << endl;*/
        
        int j = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            int k = 0;
            /*
            while (k < m)
            {
                j++;
                if (j > n)
                    j = 1;
                if (!que[j])
                    k++;
            }
            */
            for (int idx = 0; idx < m;)
            {
                j++;
                if (j > n)
                    j = 1;
                if (!que[j]) idx++;
            }
            que[j] = true;
        }
        for (int i = 1; i <= n; i++)
            if (!que[i])
                return lib[i - 1];
        return 0;
    }
};