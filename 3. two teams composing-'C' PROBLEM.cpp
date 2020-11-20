#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,a; cin>>n;
        vector<int>b(n+1,0);
        set<int>c;
        if(n==1)
        {
            cin>>a;
            cout<<"0"<<endl;
            continue;
        }
        for(int i=0; i<n; i++)
        {
            cin>>a;
            c.insert(a);
            b[a]++;
        }
        int maxi=b[0];
        for(int i=0; i<n+1; i++)
        {
            if(maxi<b[i])
                maxi=b[i];
        }
        if(c.size()==maxi)
            cout<<maxi-1<<endl;
        else if(c.size()>maxi)
            cout<<maxi<<endl;
        else
            cout<<c.size()<<endl;
    }
    return 0;
}

