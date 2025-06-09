#include<iostream>

using namespace std;

class Human
{
    private: //can be accessed within only
        int a;

    protected: //can be accessed within the class and derived classes
        int b;
    
    public: //can be accessed from anywhere!
        int c;
};

int main()
{
    Human dj;
    dj.c = 1;
}