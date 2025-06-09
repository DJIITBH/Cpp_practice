#include<iostream>

using namespace std;

// MAKING A SINGLE VARIABLE THAT WILL BE SHARED AMONG DIFF OBJECTS OF SAME CLASS!
class Customer
{
    string name;
    int acc;
    int balance;

    public:
    static int total_customer; //automatically creates.

        Customer(string name, int acc, int balance)
        {   
            this->name = name;
            this->acc = acc;
            this->balance = balance;
            total_customer++;
        }

        void display()
        {
            cout<<name<<" "<<acc<<" "<<balance<<" "<<total_customer<<endl;
        }

};
// initialize val of static variable
int Customer::total_customer=0;

int main()
{
    Customer A1("rohan", 1, 1000);
    Customer A2("rani", 2, 2000);
    A1.display();
    Customer::total_customer  =5;
    // directly accessing in main w/o any obj!
    A2.display();
}