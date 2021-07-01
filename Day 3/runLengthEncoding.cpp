/**
Given a list nums of integers representing a list compressed with run-length encoding.

Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.

Return the decompressed list.
**/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int freq;
        int value;
        for(int i=1;i<nums.size();i=i+2)
        {
            freq=nums[i-1];
            value=nums[i];
            while(freq--)
            {
                ans.push_back(value);
            }
        }
        return ans;
    }
};
