#include<iostream>
#include<map>
#include<utility>

using namespace std;

// Accessible by keys (not index), and each key is unique.
// Automatically sorted in ascending order by their keys.

void print(map<string,int> &m)
{
    for(pair<string,int> p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}

int main ()
{
    map<string,int> people = { {"john", 32}, {"adele", 45}, {"bo", 29} };
    cout<<"john is "<<people["john"]<<endl;
    cout<<people.at("bo")<<endl;
    // at is preferred over [] because it throws error if element does not exist
    people["john"] = 0;
    cout<<"john is "<<people["john"]<<endl;
    people["dj"]=20;
    people["ram"] = 10;
    people.insert({"raj",2});
    people.insert({"john",2}); //will take older value only!
    people.insert(make_pair("z",200));
    map<string,int>::iterator it;
    it = people.find("z");
    cout<<(*it).first<<" "<<(*it).second<<endl;

    cout<<"**\n";

    print(people);
}