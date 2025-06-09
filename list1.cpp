#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void print(std::list<int> &l)
{
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    std::list<int> l = {5,2,9};
    l.push_back(6);
    l.push_front(4);

    list<int>::iterator itr = find(l.begin(), l.end(), 2); //4,5,2,9,6
    l.insert(itr,8); // inserts before the position pos
    print(l);
    l.erase(itr);
    print(l);

}