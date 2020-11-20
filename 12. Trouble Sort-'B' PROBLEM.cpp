#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>a(n),b(n),c(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
        set<int>d;
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            d.insert(b[i]);
        }
        if(d.size()==1)
        {
            sort(c.begin(),c.end());
            if(a==c)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
            cout<<"Yes\n";
    }
    return 0;
}
