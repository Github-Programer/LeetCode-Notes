#include <string>
#include <iostream>

#include <stack>

using namespace std;

class Solution{
    public:
    bool isValid(string s)
    {
        //() () [{}]
        stack <char> _stack;
        
        //or vector, be #include<vector>  <char>too

        int length = s.size();//10
        char tmp;
        //length for s(string l)
        for(int i = 0; i < length; i++)
        {
            char every = s[i];
            if(every == '(' || every == '{' || every == '[')
                _stack.push(s[i]);
            else{
                if(_stack.size() == 0)
                    return false;
                else{
                    // 取栈顶元素
                    tmp = _stack.top();
                    // 出栈
                    if(tmp == '(' && every == ')' || tmp == '[' && every == ']' || tmp == '{' && every == '}')
                        _stack.pop();
                    else if(tmp == ' ')
                        continue;
                    else
                        return false;
                }
            }
        }
        return (_stack.size() == 0);
    }
};