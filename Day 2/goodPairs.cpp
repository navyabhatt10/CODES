/**
Given an array of integers nums.
A pair (i,j) is called good if nums[i] == nums[j] and i < j.
Return the number of good pairs.
**/

#include<bits/stdc++.h>
using namespace std;

  int numIdenticalPairs(vector<int>& nums) {
        int goodpairs=0;
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]]>1)
                goodpairs+=freq[nums[i]]-1;
        }
        return goodpairs;
    }

int main()
{
    int n,el;
    cin>>n;
    vector<int> nums;
    cout<<"nums = ";
    for(int i=0; i<n; i++)
    {
        cin>>el;
        nums.push_back(el);
    }
    int k = numIdenticalPairs(nums);
       cout<<k;
return 0;
}
