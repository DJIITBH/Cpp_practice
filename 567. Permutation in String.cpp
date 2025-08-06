class Solution {
private:
    bool check(int arr1[], int arr2[])
    {
        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        int count2[26] = {0};
        for(int i=0;i<s1.size();i++)
        {
            int index = s1[i]-'a';
            count1[index]++;
        }
        int i=0;
        if(s1.size()>s2.size())
        {
            return false;
        }
        while(i<s1.size())
        {
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(check(count1, count2))
        {
            return true;
        }
        else{
            while(i<s2.size())
            {
                count2[s2[i-s1.size()]-'a']--;
                count2[s2[i]-'a']++;
                 if(check(count1, count2))
                {
                    return true;
                }
                i++;
            }
        }
        return false;

    }
};
