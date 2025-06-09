#include<iostream>

using namespace std;

// how to access pvt static variable of class? with static member function
class Customer
{
    string name;
    int acc;
    int balance;
    static int total_customer; //automatically creates.     

    public:

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

        static void acceStatic()
        {
            cout<<total_customer<<endl;
        }

};
// initialize val of static variable
int Customer::total_customer=0;

int main()
{
    Customer A1("rohan", 1, 1000);
    Customer A2("rani", 2, 2000);
    A1.display();
    Customer::acceStatic();
}