/**
You are given an integer array representing the current order. Return the number of indices where elements are not in place after sorting.
**/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
     vector<int> exp=heights;
        int c=0;
        sort(exp.begin(),exp.end());
        for(int i=0;i<heights.size();i++)
        {
        if(heights[i] != exp[i])
            c++;
        }
        return c;
    }
};
