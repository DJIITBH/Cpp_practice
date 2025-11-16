#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int ans=0,i=0;
    cout<<"Write any number: ";
    cin>>n;
    
    if (n>=0)
    {
        while(n!=0)
        {
            int bit = n&1;
            ans = bit*pow(10,i) + ans;
            n=n>>1;
            i++;
        }
        cout<<"binary: "<<ans<<endl;

    }
    else
    {
        n=-1*n;
        int arr[32] = {0};
        while(n!=0)
        {
            int bit = n&1;
            arr[i] = arr[i] + bit;
            n=n>>1;
            i++;
        }
        for(i=0;i<32;i++)
        {
            arr[i] = 1 - arr[i];
        }
        // for(i=31;i>=0;i--)
        // {
        //     cout<<arr[i]<<" ";
        // }
        if(arr[0]==0)
        {
            arr[0] = 1;
        }
        else{
            for(i=0;i<32;i++)
            {
                int bit=arr[i];
                if(bit==0)
                {
                    arr[i]=1;
                    break;
                }
                else{
                    arr[i] = 0;
                }
            }
        }
        cout<<"ans for negative int: ";
        for(i=31;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}