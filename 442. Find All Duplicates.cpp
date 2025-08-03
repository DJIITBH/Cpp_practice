class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> map;
        vector<int> vec;
        for(int i=0; i<nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for(auto pair : map)
        {
            if(pair.second==2)
            {
                vec.push_back(pair.first);
            }
        }
        return vec;
    }
};
