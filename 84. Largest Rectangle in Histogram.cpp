class Solution {
private:
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
            if(st.top()!=-1 && arr[st.top()] < curr)
            {
                ans.push_back(st.top());
                st.push(i);
            }
            else
            {
                while(st.top() != -1 && arr[st.top()]>=curr)
                {
                    st.pop();
                }
                ans.push_back(st.top());
                st.push(i);
            }
        }
        reverse(ans);
        return ans;
    }

    vector<int> prevSmallerElement(vector<int> &arr, int n)
    {
        stack<int> st;
        vector<int> ans;
        st.push(-1);
        for(int i=0; i<n; i++)
        {
            int curr = arr[i];
            if(st.top()!=-1 && arr[st.top()] < curr)
            {
                ans.push_back(st.top());
                st.push(i);
            }
            else
            {
                while(st.top() != -1  && arr[st.top()]>=curr)
                {
                    st.pop();
                }
                ans.push_back(st.top());
                st.push(i);
            }
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> prevSmall = prevSmallerElement(heights, n);
        vector<int> nextSmall = nextSmallerElement(heights, n);
        int area = INT_MIN;
        for(int i=0; i<n; i++)
        {
            int length = heights[i];
            if(nextSmall[i]==-1)
            {
                nextSmall[i] = n;
            }
            int breadth = nextSmall[i] - prevSmall[i] - 1;
            int newArea = length*breadth;
            area = max(area, newArea);
        }
        return area;
    }
};
