/**
Given a m * n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.
**/

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> vec;
        int r=matrix.size();
        int c=matrix[0].size();
        int maximum,minimum,k;
        for(int i=0;i<r;i++)
        {
         minimum=INT_MAX;
         maximum=INT_MIN;
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]<minimum)
                {
              minimum=min(minimum,matrix[i][j]);  
              k=j;
                }
            } 
            for(int j=0;j<r;j++)
            {
              maximum=max(maximum,matrix[j][k]);  
            }
            if(minimum==maximum)
            {
                vec.push_back(minimum);
            }  
        }
        return vec;
    }
};
