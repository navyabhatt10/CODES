/**
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. 
Return the answer in an array.
**/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         unordered_map<int, int> m;
        vector<int> v = nums;
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (m.find(v[i]) == m.end()) {
                m[v[i]] = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = m[nums[i]];
        }
        return nums;
    }
};
