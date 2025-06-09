#include <iostream>
using namespace std;

class Student
{
    //by default, members are private
public:
    // public members
    // public members can be accessed from outside the class
    // private members can only be accessed from within the class
    string name;
    int age, roll_number;
    string grade;
};
int main()
{
    Student S1;
    S1.name = "dhananjay";
    S1.age = 20;
    S1.roll_number = 123;
    S1.grade = "A";
    cout << "Name: " << S1.name << endl;
}