#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,p,ans;
        cin>>n>>k;

        p=k/(n-1);
        ans=k+p;

        if(ans%n==0)
            cout<<ans-1<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}

