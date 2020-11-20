#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,d,m,n;
        cin>>a>>b>>c>>d;
        m=max(a,b);
        a=min(a,b);
        n=max(c,d);
        c=min(c,d);
        if(m==n && a+c==m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


