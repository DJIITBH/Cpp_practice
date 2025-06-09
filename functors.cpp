#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class X {
    public:
    void operator()(string str)
    {
        cout<<"calling functor X with parameter "<<str<<endl;
    }
};

class AddValue {
    int val;
    public: 
        AddValue(int j) : val(j) {}
        void operator()(int i)
        {
            cout<<i+val<<endl;
        }
};

int main()
{
    X foo;
    foo("hi");
    vector<int> vec = {2,3,4,5};
    for_each(vec.begin(), vec.end(), AddValue(2));
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
}