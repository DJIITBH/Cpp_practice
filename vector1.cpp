#include<iostream>
#include<vector>

using namespace std;

void print(std::vector<int> &v)
{
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main ()
{
    std::vector<int> vec = {1,2,3,4,5};
    
    print(vec);
    
    cout<<vec.at(0)<<endl;
    // vec.push_back(6);
    cout<<"size of vector "<<vec.size()<<endl;
    cout<<"vec is empty? "<<vec.empty()<<endl;
    int *p = &vec[0];
    p[2] = 8;
    print(vec);
    vector<int>vec2(vec);

}