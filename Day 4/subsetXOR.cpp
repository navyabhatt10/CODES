/**
Given an array nums, return the sum of all XOR totals for every subset of nums. 
**/

class Solution {
public:
    
     int sol(vector<int> &nums, int i,int sum)
    {
        if(i==nums.size())
        {
            return sum;
        }
        return sol(nums,i+1,sum^nums[i])+sol(nums,i+1,sum);
    }
    int subsetXORSum(vector<int>& nums) 
    {
                 return sol(nums,0,0);   
    }
};
