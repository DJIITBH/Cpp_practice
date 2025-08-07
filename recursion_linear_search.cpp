#include <iostream>
using namespace std;

bool search(int *arr, int size, int key)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    search(arr+1,size-1,key);
    // return false;
}

int main()
{
    int arr[5]={3,4,5,1,2};
    cout<<search(arr,5,1)<<endl;
}
