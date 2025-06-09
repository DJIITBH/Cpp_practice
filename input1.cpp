#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter integer "<<endl;
    cin>>x;
    cout<<"you entered "<<x<<endl;
    // int arr[x];
    // for (int i=0;i<x;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
// dynamic memory allocation is happening here, heap memory not in sack!
    int* arr = new int[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }
    delete arr; // Don't forget to free memory

}