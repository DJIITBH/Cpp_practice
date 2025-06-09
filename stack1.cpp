#include<iostream>
#include<stack>

using namespace std;

int main()
{
    // std::stack<int> st = {1,2,3,4,5}; //not allowed
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);


    // while(!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;

    cout<<"no. of elements in stack: "<<st.size()<<endl;
}
