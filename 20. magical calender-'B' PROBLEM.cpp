#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long a=min(n,m);
        long long sum=(a*(a+1))/2;
        if(m>=n)
            sum=sum-n+1;
        cout<<sum<<"\n";
    }
}

