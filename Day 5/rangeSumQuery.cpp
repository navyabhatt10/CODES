/**
Given an integer array nums, handle multiple queries of the following type:

Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
**/

class NumArray {
public:
    vector<int> vec;
    NumArray(vector<int>& nums) {
        vec = nums;
        for (int i=1; i<nums.size(); i++)
            vec[i] = nums[i]+vec[i-1];
    
    }
    
    int sumRange(int left, int right) {
      if (left== 0) 
         return vec[right];
      else
        return vec[right]-vec[left-1];    
    }
};
