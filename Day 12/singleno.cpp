/**
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
**/

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int result = 0;
        for(int i=0; i<nums.size(); i++) 
        {
            result = result^nums[i];
        }
        return result;    
    }
};
