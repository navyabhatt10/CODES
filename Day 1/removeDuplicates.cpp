/**
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
**/
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums)
 {
    if (nums.size() == 0)
        return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
    }

int main()
{
    int len;
    int el;
    cin>>len;
    vector<int> nums;
    for(int i=0; i<len; i++)
    {
        cin>>el;
        nums.push_back(el);
    }
    int k = removeDuplicates(nums);
    for(int i=0; i<k; i++)
    {
        cout<<nums[i]<<" ";
    }
return 0;
}
