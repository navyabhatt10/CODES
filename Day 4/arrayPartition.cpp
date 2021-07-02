/**
Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. 
Return the maximized sum.
**/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int sum = 0;
    for(int itr = 0; itr < nums.size(); itr += 2){
        sum += nums[itr];
    }
    return sum;
    }
};
