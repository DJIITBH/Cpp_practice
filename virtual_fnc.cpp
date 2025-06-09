#include<iostream>
#include<vector>
using namespace std;

class Animal 
{
    public:
        virtual void speak()
        {
            cout<<"huuur huuur"<<endl;
        }
};

class Dog : public Animal
{
    public:
        void speak() override
        {
            cout<<"bark krunga"<<endl;
        }
};

class Cat : public Animal
{
    public:
        void speak() override
        {
            cout<<"Meow krunga"<<endl;
        }
};

int main()
{
    Animal *P;
    // Dog *P; //creating a pointer to point obj of tye Dog
    // P = new Dog; //creating an obj of type Dog and allocating to pointer
    // P->speak();
    // creating a virtual fnc let execute fnc in run time.
    // parent class ka pointer child class ke address ko store kr skta hai

    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i=0; i<animals.size();i++)
    {
        P = animals[i];
        P->speak();
    }

}