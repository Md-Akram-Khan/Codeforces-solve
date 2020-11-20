#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,sum=0;
        cin>>n>>m>>x>>y;
        y=min(y,2*x);
        for(int i=0; i<n; i++)
        {
            string a;
            cin>>a;
            for(int j=0; j<m; j++)
            {
                if(a[j]=='.')
                {
                    if(j+1<m && a[j+1]=='.')
                    {
                        a[j+1]='*';
                        sum+=y;
                    }
                    else
                        sum+=x;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

