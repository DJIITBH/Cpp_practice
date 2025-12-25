class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        int n = q.size();
        if(n<k)
        {
            return q;
        }

        stack<int> st;
        for(int i=0;i<k;i++)
        {
            st.push(q.front());
            q.pop();
        }
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        for(int i=0; i<(n-k); i++)
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        return q;
    }
};
