#include <iostream>
using namespace std;

int fac(int n)
{
    if(n==0)
    {
        return 1;
    }
    int smallproblem = fac(n-1);
    int bigproblem = n*fac(n-1);
    return bigproblem;
}

void print(int n)
{
    if(n==0)
    {
        return ;
    }
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    // cout<<fac(n)<<endl;
    print(n);
}
