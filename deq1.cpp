#include<iostream>
#include<deque>

using namespace std;

void print(std::deque<int> &deq)
{
    for(int i:deq)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    std::deque<int> deq = {4,6,7};
    deq.push_front(2);
    deq.push_back(3);
    print(deq);

}