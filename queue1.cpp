#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"front element: "<<q.front()<<endl;
    cout<<"back element: "<<q.back()<<endl;

    q.pop();
    cout<<"front element: "<<q.front()<<endl;

}

