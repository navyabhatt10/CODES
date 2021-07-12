/**
Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.

The words in paragraph are case-insensitive and the answer should be returned in lowercase.
**/

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(int i=0;i<paragraph.length();i++)
        {
            if(isalpha(paragraph[i]))
                paragraph[i]=tolower(paragraph[i]);
            else
                paragraph[i]=' ';
        }
        unordered_map<string,int>result;
        stringstream s(paragraph);
        string word="";
        unordered_set<string> set(banned.begin(),banned.end());
        while(s>>word)
        {
            if(!set.count(word))
                result[word]++;
        }
            string temp;
            int freq=INT_MIN;
            for(auto i:result)
            {
                if(i.second>freq)
                {
                    temp=i.first;
                    freq=i.second;
                }
            }
        return temp;
    }
};
