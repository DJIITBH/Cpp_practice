#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char> stack;
    bool isRedundant = true;
    for(int i=0; i<s.length(); i++)
    {
        char ch = s[i];
        if(ch=='(' || ch=='*' || ch=='+' || ch=='-' || ch=='/')
        {
            stack.push(ch);
        }
        if(ch==')')
        {
            isRedundant = true;
            while(stack.top()!='(')
            {
                char top = stack.top();
                if(top=='*' || top=='+' || top=='-' || top=='/')
                {
                    isRedundant = false;
                    stack.pop();
                }
            }
            stack.pop();
            if(isRedundant)
            {
                return true;
            }
        }
    }
    return false;

}
