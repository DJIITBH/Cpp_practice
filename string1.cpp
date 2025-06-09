#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    cout<<"enter string ";
    string str;
    getline(cin,str);
    cout<<"you entered "<<str;
    cout<<"size before "<<str.size()<<endl;
    str += "world";
    cout<<"size after "<<str.size()<<endl;
    cout<<"substring "<<str.substr(0,6)<<endl;
    cout<<str.find("world")<<endl; //returns first index from where the string starts.
    str.push_back('!');
    //d j   s i r w o r l d
    //0 1 2 3 4 5 6 7 8 9 10
    //dj sibhakreld
    str.replace(6,5,"bhakre"); // start from index 5 removes next 4 characters
    // cout<<str<<endl;
    string s1("hello");
    string s2("hello",3); //s2:hel
    s1.size();
    s1.front();
    s1.back();
    s1.push_back('z');
    s1.pop_back();
    s2 = "Dragon Land";
    s1.assign(s2); //s1=s2
    s1.assign(s2,2,4); //s1: agon string, start_pos, size
    s1.assign("Wisdom",3); //s1: Wis Cstring, size
    s1.assign(3,'x'); // s1: "xxx"

    s1.insert(2,"mountain",4); //pos, string, length
    s1.erase(1,4); //pos, size
    s2.substr(2,4); //pos, size

    // MEMBER FUNCTION ALGORITHMS
    s1 = "abcdefg";
    char buf[20];
    size_t len = s1.copy(buf,3); //buf:abc len==3
    len = s1.copy(buf,4,2); //copies s1 to buf start = 2, size = 4

    // NON MEMBER FUNCTIONS
    cout<<s1<<endl;
    cin >> s1; //read a line
    getline(cin,s1);  //delimeter of '\n'
    getline(cin,s1,';'); //delimeter is ';'

    s1 = to_string(8);

    // string into number
    s1 = "190";
    int i = stoi(s1);
    
    // ALGORITHMS
    s1 = "Variety is the spice of life.";
    int num = count(s1.begin(),s1.end(), 'e');

    s1 = "Goodness is better than beauty.";
    string::iterator itr = search_n(s1.begin(), s1.begin()+20,2,'s'); //2 consecutive s
    s1.erase(itr, itr+5); //remove 5 characters starting from pos of itr
    s1.insert(itr,3,'x'); //inserts 3 x at position of itr
    s1.replace(itr,itr+3,3,'y'); //replace 3 char with 3 y's
    
}