/**
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].
**/

#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> v;
    int j=n;
    for(int i=0;i<n;i++)
    {
        v.push_back(nums[i]);
        v.push_back(nums[j]);
        j++;
    }
return v;
}

int main()
{
    int l;
    int el,n;
    vector<int> nums;
    cin>>l;
    cout<<"nums = ";
    for(int i=0; i<l; i++)
    {
        cin>>el;
        nums.push_back(el);
    }
    cout<<"n = ";
    cin>>n;
    vector<int> v = shuffle(nums,n);
    for(int i=0; i<(2*n); i++)
    {
        cout<<v[i]<<" ";
    }
return 0;
}
