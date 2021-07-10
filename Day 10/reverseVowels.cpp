/**
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.
**/

class Solution {
public:
    bool isVowel(char ch)
  {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
  }

    string reverseVowels(string s) {
        int len = s.length();
    int l = 0, r = len - 1;

    while (l < r)
    {
      while(l<r && !isVowel(s[l]))
      {
        l++;
      }
      while(l<r && !isVowel(s[r]))
      {
        r--;
      }
        swap(s[l],s[r]);
        l++;
        r--;
    }
    return s;
    }
};
