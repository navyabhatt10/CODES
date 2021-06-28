/**
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.
**/
#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val)
{
    int i=0;
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]!=val)
        {
            nums[i]=nums[j];
            i++;
        }
    }
    return i;
}

int main()
{
    int l;
    int el,key;
    vector<int> nums;
    cin>>l;
    cout<<"nums = ";
    for(int i=0; i<l; i++)
    {
        cin>>el;
        nums.push_back(el);
    }
    cout<<"Key = ";
    cin>>key;
    int k = removeElement(nums,key);
    for(int i=0; i<k; i++)
    {
        cout<<nums[i]<<" ";
    }
return 0;
}
