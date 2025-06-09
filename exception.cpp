#include<iostream>

using namespace std;

int main()
{
    try{
        int *p = new int[10000000000];
        cout<<"allocation ho gyi"<<endl;
        delete []p;
    }
    // exception is class name
    catch(const exception &e)
    {
        cout<<"exception occured "<<e.what()<<endl;
    }
    
}