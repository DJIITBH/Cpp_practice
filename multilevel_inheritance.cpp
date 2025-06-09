#include<iostream>

using namespace std;

class Person
{
    protected:
        string name;

    public:
        void introduce()
        {
            cout<<"Mera naam: "<<name<<" hai"<<endl;
        }
};

class Employee: public Person
{
    protected:
        int salary;

    public:
        void monthly_salary()
        {
            cout<<"salary hai-> "<<salary<<endl;
        }
};

class Manager:public Employee
{
    public:
        string dept;

        Manager(string name, int salary, string dept)
        {
            this->name = name;
            this->salary = salary;
            this->dept = dept;
        }

        void work()
        {
            cout<<"mera dept-> "<<dept<<endl;
        }

};

int main()
{
    Manager A1("rohan", 200,"finance");
    A1.work();
    A1.introduce();
    A1.monthly_salary();
}