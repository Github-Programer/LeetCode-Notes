#pragma once
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int len = s.length(), tmp;
        // hp �� vector ģ��ջ
        vector<char> hp;
        for (int i = 0; i < len; i++)
            // ��ջ
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                hp.push_back(s[i]);
            else
            {
                // ջΪ��
                if (hp.size() == 0) return false;
                // ȡջ��Ԫ��
                tmp = hp.back();
                // ��ջ
                if (tmp == '(' && s[i] == ')' || tmp == '[' && s[i] == ']' || tmp == '{' && s[i] == '}')
                    hp.pop_back();
                else
                    return false;
            }
        // �ж�ջ�Ƿ�Ϊ��
        return (hp.size() == 0);
    }
};

