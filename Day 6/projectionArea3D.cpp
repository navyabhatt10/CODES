/**
You are given an n x n grid where we place some 1 x 1 x 1 cubes that are axis-aligned with the x, y, and z axes.

Each value v = grid[i][j] represents a tower of v cubes placed on top of the cell (i, j).

We view the projection of these cubes onto the xy, yz, and zx planes.

A projection is like a shadow, that maps our 3-dimensional figure to a 2-dimensional plane. We are viewing the "shadow" when looking at the cubes from the top, the front, and the side.

Return the total area of all three projections.
**/

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
         int i, j, xz, yz;
        int n=grid.size();
        int res=0;
        for (i = 0; i < n; i++) {
            xz = yz = 0;
            for (j = 0; j < n; j++) {
                if (grid[i][j])
                    res++;
                if (grid[i][j] > xz)
                    xz = grid[i][j];
                if (grid[j][i] > yz)
                    yz = grid[j][i];
            }
            res += xz + yz;
        }
        return res;
    }
};
