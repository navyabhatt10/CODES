/**
Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
**/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l1=ransomNote.size();
        int l2=magazine.size();
        vector<int> v(26,0);
        for(int i=0;i<l1;i++)
        {
            v[ransomNote[i]-'a']++;
        }
        for(int i=0;i<l2;i++)
        {
            v[magazine[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(v[i]>0)
                return false;
        }
        return true;
    }
};
