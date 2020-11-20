#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,c=0; cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int maxx=a[n-1];
        for(int i=0; i<n; i++)
        {
            if((maxx-a[i])%2!=0)
            {
                c++;
                break;
            }
        }
        if(c==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

