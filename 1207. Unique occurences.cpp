class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> map;
        set<int> set;
        for(int i=0;i<arr.size(); i++)
        {
            map[arr[i]]++;
        }
        for(auto pair : map)
        {
            int freq = pair.second;
            if(set.find(freq)!=set.end())
            {
                return false;
            }
            else{
                set.insert(freq);
            }
        }
        return true;
    }
};
