#include<iostream>
#include<string>
#include <cstring>  // For strlen

using namespace std;

int main()
{
    string str;
    cout<<"enter string ";
    // cin>>str; //cant read spaces
    getline(cin, str);	
    cout<<"you entered "<<str<<endl;

    char name[] = "randwa"; //size lelega
    //getline, dynamically declare char array

    for(int i = 0; name[i]!='\0';i++)
    {
        cout<<name[i]<<" ";
    }
    size_t length = strlen(name);

    cout << "The string length (excluding null terminator): " << length << endl;

    char *meristr = new char[100];

    int i = 0;
    char ch;
    while (i < 100) {
        ch = cin.get();  // Get each character
        if (ch == '\n') {  // Detect newline or 'e' for termination (example)
            break;
        }
        meristr[i++] = ch;
    }

}