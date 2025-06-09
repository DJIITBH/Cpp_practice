#include<iostream>
#include<set>

using namespace std;

// Are sorted automatically in ascending order.
// Are unique, meaning equal or duplicate values are ignored.
// Can be added or removed, but the value of an existing element cannot be changed.
// Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
//O(logn) for ordered set

void print(set<int>&s)
{
    for (int  i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    set<int> s = {4, 1, 3, 2, 1, 1, 2, 4, 4};

    set<int, greater<int>> s1 = {4, 1, 3, 2, 1, 1, 2, 4, 4};

    print(s);
    // print(s1);
    // To add elements to a set, you can use the .insert() function:
    s.insert(7);
    s.erase(2);
    cout<<"after deletion "<<endl;
    print(s);
    cout<<"Size of set "<<s.size()<<endl;
    cout<<"is set empty? "<<s.empty()<<endl;
    if(s.find(1)!=s.end())
    {
        cout<<"1 hai "<<endl;
    }
    pair<set<int>::iterator, bool>ret;
    set<int>::iterator it;
    ret = s.insert(3);
    if(ret.second==false)
        it = ret.first;
    cout<<*it<<endl;
}