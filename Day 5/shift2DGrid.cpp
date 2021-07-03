/**
Given a 2D grid of size m x n and an integer k. You need to shift the grid k times.

In one shift operation:

Element at grid[i][j] moves to grid[i][j + 1].
Element at grid[i][n - 1] moves to grid[i + 1][0].
Element at grid[m - 1][n - 1] moves to grid[0][0].
Return the 2D grid after applying shift operation k times.
**/

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> g=grid;
        int m=grid.size();
        int n=grid[0].size();
        k=k%(m*n);
        while(k--)
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(j+1<n)
                    {
                        g[i][j+1]=grid[i][j];
                    }
                    if(i+1<m)
                    {
                        g[i+1][0]=grid[i][n-1];
                    }
            }
        }
            g[0][0]=grid[m-1][n-1];
            grid=g;
    }
        return g;
    }
};
