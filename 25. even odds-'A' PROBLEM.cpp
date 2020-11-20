#include"bits/stdc++.h"
using namespace std;
int main()
{
    long long n,k,m,ans;
    cin>>n>>k;

    m = (n%2==0) ? n/2 : (n+1)/2;
    ans = (k<=m) ? (k*2)-1 : (k-m)*2;

    cout<<ans<<endl;
    return 0;
}

