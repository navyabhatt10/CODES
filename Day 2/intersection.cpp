/**
Given two integer arrays nums1 and nums2, return an array of their intersection.
Each element in the result must be unique and you may return the result in any order.
**/

#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i =0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }

        for(int j=0;j< nums2.size();j++)
        {
            if(m[nums2[j]]>0)
            {
                ans.push_back(nums2[j]);
                m[nums2[j]]=-1;
            }
        }
         return ans;
}

int main()
{
    int m,n,el;
    cin>>m>>n;
    vector<int> nums1;
    vector<int> nums2;
    cout<<"num1 = ";
    for(int i=0; i<m; i++)
    {
                    cin>>el;
                 nums1.push_back(el);
    }
        cout<<"num2 = ";
        for(int i=0; i<n; i++)
    {
                    cin>>el;
                 nums2.push_back(el);
    }
    vector<int> v = intersection(nums1,nums2);
       for(int k=0;k<v.size();k++)
       {
           cout<<v[k]<<" ";
       }
return 0;
}


