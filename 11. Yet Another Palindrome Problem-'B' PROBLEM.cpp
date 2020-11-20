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
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+2; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    break;
                }
            }
            if(c!=0)
                break;
        }
        if(c==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
