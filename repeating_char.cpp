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
    for(int i=0;i<26;i++)
    {
        if(max<count[i])
        {
            max = count[i];
            ans = i + 'a';
        }
    }
    return ans;
}

int main() {
    string s = "ddhhhhljpqq";
    char ans = maxchar(s);
    cout<<"ans "<<ans<<endl;
}
