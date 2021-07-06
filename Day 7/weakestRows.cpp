/**
You are given an m x n binary matrix mat of 1's (representing soldiers) and 0's (representing civilians). The soldiers are positioned in front of the civilians. That is, all the 1's will appear to the left of all the 0's in each row.

A row i is weaker than a row j if one of the following is true:

The number of soldiers in row i is less than the number of soldiers in row j.
Both rows have the same number of soldiers and i < j.
Return the indices of the k weakest rows in the matrix ordered from weakest to strongest.
**/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++)
        {
            int l=0,r=mat[i].size()-1;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if(mat[i][mid]==0)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            v.push_back({i,l});
        }

        sort(v.begin(),v.end(),comp());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
    struct comp {
        bool operator()(pair<int, int> a, pair<int, int>b) 
        {
            if(a.second > b.second) 
                return false;
            else if(a.second == b.second) 
                return a.first<b.first;
            return true;
        }
    };
};
