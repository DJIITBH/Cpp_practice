#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  if(str.length()%2==1)
  {
    return -1;
  }
  stack<char> stack;
  for(int i=0; i<str.length(); i++)
  {
    if(str[i]=='{')
    {
      stack.push(str[i]);
    }
    else
    {
      if(!stack.empty() && stack.top()=='{')
      {
        stack.pop();
      }
      else
      {
        stack.push(str[i]);
      }
    }
  }
  int a=0, b=0;
  while(!stack.empty())
  {
    if(stack.top()=='}')
    {
      a++;
    }
    else
    {
      b++;
    }
    stack.pop();
  }
  return (a+1)/2 + (b+1)/2;
}
