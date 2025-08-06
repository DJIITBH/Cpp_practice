#include <iostream>
#include <vector>
using namespace std;

char maxchar(string s)
{
    int count[26] = {0};
    int max = count[0];
    char ans;
    for(int  i=0;i<s.size();i++)
    {
        int index = s[i] - 'a';
        count[index]++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(count[s[i]-'a']==1)
        {
            return (s[i]);
        }
    }
    return '\0';
}

int main() {
    string s = "dljldd";
    char ans = maxchar(s);
    cout<<"ans "<<ans<<endl;
}
