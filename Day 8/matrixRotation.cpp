/**
Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise.
**/

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k=4;
        while(k--)
        {
            mat=rotate(mat);
                if(mat==target)
                    return true;
        }
        return false;
    }
       vector<vector<int>> rotate(vector<vector<int>> mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=i;j<mat.size();j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<mat.size();i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
        return mat;
    }
};
