#include<iostream>
using namespace std;

class Customer 
{
    string name;
    int account_number;
    int balance;

    public:
    // defualt Constructor
    Customer()
    {
        cout<<"Default Constructor Called"<<endl;
    }
    Customer(string name, int account_number, int balance)
    {
        cout<<"Parameterized Constructor Called"<<endl;
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    void data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    // inline constructor
//     inline Customer(string a, int b, int c):name(a), account_number(b), balance(c)
//     {
//         cout<<"Inline Constructor Called"<<endl;
//     }
};
// ******* this stores address of the object created!
// this keyword is used to refer to the current object
int main()
{
    Customer a1;
    Customer a2("rahul", 123, 1000);
    Customer a3(a2);
    a3.data();


}