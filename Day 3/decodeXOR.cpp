/**
There is a hidden integer array arr that consists of n non-negative integers. It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1].

Given the encoded array and an integer first, that is the first element of arr, i.e. arr[0].

Return the original array arr. 
**/
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        for(int i = 0; i < encoded.size(); i++)
        {
            ans.push_back(ans[i] ^ encoded[i]);
        }
            return ans;
    }
};
