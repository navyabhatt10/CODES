/**
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
**/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                if(st.empty())
                    return false;
            else if(st.top()!='(' && s[i]==')')
                return false;
              else if(st.top()!='{' && s[i]=='}')
                return false;
              else if(st.top()!='[' && s[i]==']')
                return false;
            else
                st.pop();
        }  
        }
        if(st.empty())
    return true;
        else 
            return false;
    }
    };
