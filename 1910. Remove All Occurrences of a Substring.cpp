class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size())
        {
            int index = s.find(part);
            if(index!=string::npos)
            {
                s.erase(index, part.size());
            }
            else{
                break;
            }
            
        }
        return s;
    }
};
