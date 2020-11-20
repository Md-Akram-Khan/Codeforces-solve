#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int m,n,a,mi;
        cin>>m>>n;
        set<int>row,column;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a;
                if(a==1)
                {
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        mi=min(m-row.size(),n-column.size());
        if(mi%2==0)
            cout<<"Vivek\n";
        else
            cout<<"Ashish\n";
    }
    return 0;
}
