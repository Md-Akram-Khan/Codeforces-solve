#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,e=0,o=0,c,d=0; cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                e++;
            else
                o++;
        }
        sort(a.begin(),a.end());
        if(o%2==0 && e%2==0)
            cout<<"YES\n";
        else
        {
            for(int i=1; i<n; i++)
            {
                c=a[i]-a[i-1];
                if(c==1)
                {
                    d++;
                    cout<<"YES\n";
                    break;
                }
            }
            if(d==0)
                cout<<"NO\n";
        }
    }
    return 0;
}

