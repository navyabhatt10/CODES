/**
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank.
Find the richest customer.
**/

#include<bits/stdc++.h>
using namespace std;

int richest(vector<vector<int> >& accounts)
{
    int row=accounts.size();
    int col=accounts[0].size();
    int maximum=0,cust;
        for(int i=0;i<row;i++)
        {
            int sum=0;
            for(int j=0;j<col;j++)
            {
                sum=sum+accounts[i][j];
            }
            if(sum>maximum)
            {
                maximum=sum;
                cust=i+1;
            }
        }
        return cust;
    }

int main()
{
    int m,n,el;
    cin>>m>>n;
    vector<vector<int> > accounts;
    cout<<"accounts = ";
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<n;j++)
        {
                    cin>>el;
                 accounts[i].push_back(el);
        }
    }
    int c = richest(accounts);
        cout<<c;
return 0;
}
