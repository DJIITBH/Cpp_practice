#include <bits/stdc++.h>

void sortInsertion(stack<int> &stack, int x)
{
	if(stack.empty())
	{
		stack.push(x);
		return;
	}
	int top = stack.top();
	if(top < x)
	{
		stack.push(x);
		return;
	}
	stack.pop();
	sortInsertion(stack, x);
	stack.push(top);
	return;
}

void sortStack(stack<int> &stack)
{
	if(stack.empty())
	{
		return;
	}
	int top = stack.top();
	stack.pop();
	sortStack(stack);
	sortInsertion(stack,top);
}
