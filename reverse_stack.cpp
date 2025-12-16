void insertAtBottom(stack<int> &stack, int x)
{
    if(stack.empty())
    {
        stack.push(x);
        return;
    }

    int top = stack.top();
    stack.pop();
    insertAtBottom(stack, x);
    stack.push(top);
    return;
}

void reverseStack(stack<int> &stack) {
    if(stack.empty())
    {
        return;
    }
    int top = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack, top);
    return;
}
