#include<stack>

void reverse(vector<int> &arr)
{
    int s=0;
    int e = arr.size()-1;
    while(s<=e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans;
    st.push(-1);
    for(int i=n-1; i>=0; i--)
    {
        int curr = arr[i];
        if(st.top() < curr)
        {
            ans.push_back(st.top());
            st.push(curr);
        }
        else
        {
            while(st.top()>=curr)
            {
                st.pop();
            }
            ans.push_back(st.top());
            st.push(curr);
        }
    }
    reverse(ans);
    return ans;
}
