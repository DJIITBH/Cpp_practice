class Solution {
public:
    int mySqrt(int x) {
        long long int s = 0, e= x;
        long long int mid = s + (e-s)/2;
        int ans=0;
        while(s<=e)
        {
            long long int sqr = mid*mid;
            if(sqr==x)
            {
                return mid;
            }
            if(sqr>x)
            {
                e = mid-1;
            }
            else{
                s=mid+1;
                ans=mid;
            }
            mid = s + (e-s)/2;
        }
        return ans;

    }
};
