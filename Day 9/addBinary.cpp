/**
Given two binary strings a and b, return their sum as a binary string.
**/

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string ans = "";
        
        while (i >= 0 || j >= 0 || carry==1) 
        {
            if (i >= 0)
            carry += a[i--] == '1';
            if (j >= 0)
            carry += b[j--] == '1';
            
        if(carry % 2)
            ans = "1" + ans;
        else
            ans = "0" + ans;
                    
        carry /= 2;
        }
        
     return ans;
    }
};
