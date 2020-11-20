#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,x,m;
        cin>>n>>x>>m;
        int low=x,high=x;
        for(int i=0; i<m; i++)
        {
            int l,r;
            cin>>l>>r;
            if((l<=low && low<=r)||(l<=high && high<=r))
               {
                   low=min(low,l);
                   high=max(high,r);
               }
        }
        cout<<high-low+1<<endl;
    }
    return 0;
}
