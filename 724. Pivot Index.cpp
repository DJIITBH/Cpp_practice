class Solution {
public:
int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    int l=0, r=0;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j-i>=1;j--)
        {
            r=r+nums[j];
        }
        if(l==r)
        {
            return i;
        }
        l=l+nums[i];
        r=0;
    }
    return -1;
}
};
