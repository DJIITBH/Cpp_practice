class Solution {
public:
    int countPrimes(int n) {
        vector<int> isprime;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(i<=1)
            {
                isprime.push_back(0);
            }
            else{
                isprime.push_back(1);
            }
            
        }
        for(int i=2;i<n;i++)
        {
            for(int j=2*i;j<n;j=j+i)
            {
                isprime[j] = 0;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(isprime[i])
            {
                count++;
            }
        }
        return count;
        
    }
};
