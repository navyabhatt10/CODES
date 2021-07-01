/**
You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.
**/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
         unordered_map<int,char>m;
         int c=0;
        for(auto i: allowed){
            m[i]=1;
        }
        for(auto j: words){
            int flag=1;
            for(auto i: j){
                if(m[i]==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                c++;
        }
        return c;
    }
};
