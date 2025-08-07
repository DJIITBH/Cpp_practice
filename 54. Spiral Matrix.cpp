class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int firstrow=0;
        int firstcol = 0;
        int lastrow = matrix.size()-1;
        int lastcol = matrix[0].size()-1;
        vector<int> vec;
        int count=0;
        int m = matrix.size();
        int n = matrix[0].size();
        
        while(count<m*n)
        {
            for(int index=firstcol;index<=lastcol && count<m*n ;index++)
            {
                vec.push_back(matrix[firstrow][index]);
                count++;
            }
            firstrow++;

            for(int index=firstrow;index<=lastrow && count<m*n;index++)
            {
                vec.push_back(matrix[index][lastcol]);
                count++;
            }
            lastcol--;

            for(int index = lastcol; index>=firstcol && count<m*n; index--)
            {
                vec.push_back(matrix[lastrow][index]);
                count++;
            }
            lastrow--;

            for(int index = lastrow; index>=firstrow && count<m*n; index--)
            {
                vec.push_back(matrix[index][firstcol]);
                count++;
            }
            firstcol++;
        }
        return vec;
    }
};
