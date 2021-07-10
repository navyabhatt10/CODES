/**
Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
**/

class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            if(tolower(s[left])==tolower(s[right]))
            {
                left++;
                right--;
            }
            else if(!isalnum(s[left]))
                left++;
            else if(!isalnum(s[right]))
                right--;
            else
                return false;
        }
        return true;
    }
};
