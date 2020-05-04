#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
using namespace std;
class Solution
{
    struct elm
    {
        char alp;
        int cnt;
        friend bool operator<(elm a, elm b)
        {
            return a.cnt < b.cnt;
        }
    };

public:
    string reorganizeString(string S)
    {
        priority_queue<elm> q;
        unordered_map<char, int> mp;

        for (auto s : S)
            mp[s]++;
        for (auto p : mp)
        {
            elm t;
            t.alp = p.first;
            t.cnt = p.second;
            q.push(t);
        }

        int i = q.top().cnt;
        if (S.size() % 2 && i > S.size() / 2 + 1)
            return "";
        if (S.size() % 2 == 0 && i > S.size() / 2)
            return "";
        i = 0;
        while (!q.empty())
        {
            char t = q.top().alp;
            int k = q.top().cnt;
            while (k--)
            {
                if (i >= S.size())
                    i = 1;
                S[i] = t;
                i += 2;
            }
            q.pop();
        }
        return S;
    }
};