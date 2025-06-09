#include <iostream>
using namespace std;

class Student
{
    //by default, members are private
private:
    // public members
    // public members can be accessed from outside the class
    // private members can only be accessed from within the class
    string name;
    int age, roll_number;
    string grade;

    public:
    void setname(string s){
        if (s.size()==0){
            cout << "Name cannot be empty" << endl;
            return;
        }
        name = s;
    }
    void setage(int s){
        age = s;
    }
    void setgrade(string s){
        grade = s;
    }
    void getname(){
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student S1;
    S1.setname("");
    S1.setage(20);
    S1.getname();
    Student *S = new Student;
    S->setname("dhananjay");
    S->getname();
}