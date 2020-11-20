#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long v,c,t1,t2;
        cin>>v>>c>>t1>>t2;
        if((v+c)<(t1+t2))
            cout<<"No\n";
        else
        {
            if(v>c && t2<=c)
                cout<<"Yes\n";
            else if(v<=c && t2<=v)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
}

