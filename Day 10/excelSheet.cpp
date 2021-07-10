/**
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
**/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string colName="";
        while(columnNumber>0)
        {
            char c='A'+(columnNumber-1)%26;
            colName=c+colName;
            columnNumber=(columnNumber-1)/26;
        }
        return colName;
    }
};
