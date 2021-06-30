/**
Find who all kids may have highest number of toffees if extra toffees are given to them.
**/

#include<bits/stdc++.h>
using namespace std;

vector<bool> highestToffees(vector<int>& kids,int extra) 
    {
          vector<bool> ans;
          int max1=kids[0];
          for(int i=1;i<kids.size();i++)
          {
              if(kids[i]>max1)
              max1=kids[i];
          }
             for(int i=0;i<kids.size();i++)
             {
                 if(kids[i]+extra>=max1)
              ans.push_back(true);
              else
               ans.push_back(false);
          }
          return ans;
    }

int main()
{
    int n,el,extratoffee;
    cin>>n;
    vector<int> kids;
    cout<<"kids = ";
    for(int i=0; i<n; i++)
    {
        cin>>el;
        kids.push_back(el);
    }
    cout<<"extra toffees = ";
    cin>>extratoffee;
        vector<bool> v = highestToffees(kids,extratoffee);
       for(int k=0;k<v.size();k++)
       {
           cout<<v[k]<<" ";
       }
return 0;
}
