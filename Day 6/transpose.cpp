/**
Given a 2D integer array matrix, return the transpose of matrix.
**/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> trans(m, vector<int>(n,0));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                trans[j][i]=matrix[i][j];
            }
        }
        return trans;
    }
};
