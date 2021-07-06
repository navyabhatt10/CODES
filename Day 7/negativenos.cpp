/**
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
**/

class Solution {
public:
   int countNegativesHelper(vector<int>& vec) 
   {
        int low = 0;
        int high = vec.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (vec[mid] >= 0) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return vec.size() - high - 1;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i=0; i<grid.size(); i++) {
            count += countNegativesHelper(grid[i]);
        }
        return count;
    }
};
