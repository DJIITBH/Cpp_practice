class Solution {
public:
    string removeDuplicates(string s) {
        int i=0,j=0;
        while(j<s.size())
        {
            j=i+1;
            if(s[i]==s[j])
            {
                s.erase(i,2);
                i=0;
                j=0;
            }
            else{
                i++;
            }
        }
        return s;
    }
};
