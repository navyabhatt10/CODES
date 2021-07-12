/**
Given a string s and a character c that occurs in s, return an array of integers answer where answer.length == s.length and answer[i] is the distance from index i to the closest occurrence of character c in s.

The distance between two indices i and j is abs(i - j), where abs is the absolute value function.

**/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        vector<int> ic;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
            ic.push_back(i);        
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
                v.push_back(0);
            else
            {
                int x=INT_MAX;
                for(int j=0;j<ic.size();j++)
                {
                    x=min(x,abs(ic[j]-i));
                }
        v.push_back(x);
            }
        }
        return v;
    }
};
