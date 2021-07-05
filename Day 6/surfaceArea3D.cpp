/**
You are given an n x n grid where you have placed some 1 x 1 x 1 cubes. Each value v = grid[i][j] represents a tower of v cubes placed on top of cell (i, j).

After placing these cubes, you have decided to glue any directly adjacent cubes to each other, forming several irregular 3D shapes.

Return the total surface area of the resulting shapes.
**/

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int ans = 0, n = grid.size(); 
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]) {
                    ans += 4*grid[i][j] + 2; 
                    if(i) 
                    ans -= 2*min(grid[i][j], grid[i-1][j]); 
                    if(j) 
                    ans -= 2*min(grid[i][j], grid[i][j-1]); 
                }
            }
        }
        return ans; 
    }
};
