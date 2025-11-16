#include <iostream>
#include <vector>
using namespace std;

void spiral(int arr[][3],int row, int col)
{   
    int count = 0;
    int i=0,j=0;
    vector<int> vec;
    while(count<row*col)
    {
        while(j<col)
        {
            vec.push_back(arr[i][j]);
            j++;
            count++;
        }
        j--;
        while(i<row)
        {
            i++;
            vec.push_back(arr[i][j]);
            count++;
        }
        i--;
        while(j>=0)
        {
            j--;
            vec.push_back(arr[i][j]);
            count++;
        }
        j=0;
        while(i>0)
        {
            vec.push_back(arr[i][j]);
            count++;
            i--;

        }
    }
    for(int i=0;i<9;i++)
    {
        cout<<vec[i]<<" ";
    }
}

int main() {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    spiral(arr,3,3);
}
