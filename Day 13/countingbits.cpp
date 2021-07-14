/**
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
**/

class Solution {
public:
    int hamming(uint32_t i)
    {
      int count=0; 
        while(i>0)
        { 
			count++;
            i=i&(i-1); 
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> result;
     for(int i=0;i<=n;i++)
     {
        uint32_t count=hamming(i);
         result.push_back(count);
     }
        return result;
    }
};
