/**
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard.
**/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int arr[26]={2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        vector<string> result;
        for(int i=0;i<words.size();i++)
        {
            int temp=arr[tolower(words[i][0])-97];
            int flag=0;
            for(int j=1;j<words[i].size();j++)
            {
                if(temp!=arr[tolower(words[i][j])-97])
            {
                flag=1;
                break;
            }
            }
            if(flag==0)
                result.push_back(words[i]);
        }
        return result;
    }
};
