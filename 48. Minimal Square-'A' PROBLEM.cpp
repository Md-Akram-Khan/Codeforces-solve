#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,d; cin>>a>>b;
        c=min(a,b);
        d=max(a,b);
        if(2*c>=d)
            cout<<4*c*c<<endl;
        else
            cout<<d*d<<endl;
    }
    return 0;
}

