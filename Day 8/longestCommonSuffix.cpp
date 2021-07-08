#include <bits/stdc++.h>
using namespace std;

string suffix(vector<string>& str) {
         int n=str.size();
         int flag=0;
         int i,j;
         string lcs="";
        for(i=0;i<n;i++)
        {
           reverse(str[i].begin(),str[i].end());
        }
        for(i=0;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                if(str[0][i]!=str[j][i] || str[j][i]=='\0')
                {
                    flag=1;
                    break;
                }
            }
            lcs+=str[0][i];
        }
        reverse(lcs.begin(),lcs.end());
        return lcs;
 }
int main()
{
    int n;
    cin>>n;
    vector<string>str(n);
    for(int i=0;i<n;i++)
        cin>>str[i];
        cout<<suffix(str);
    return 0;
}
