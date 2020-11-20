
#include<bits/stdc++.h>

#define nl                 "\n"
#define ll                 long long
#define pb                 push_back
#define pf                 push_front
#define np                 next_permutation
#define pp                 prev_permutation
#define sqr(x)             ((x)*(x))
#define pi                 acos(-1)
#define setprecision(x)    fixed<<setprecision((int)(x))
#define mem1(x)            memset(x,0,sizeof(x))
#define mem2(x)            memset(x,-1,sizeof(x))
#define all(x)             (x).begin(),(x).end()
#define sort1(x)           sort(all(x))
#define csort(x,c)         sort(all(x),c)
#define rsort(x)           sort(x.rbegin(),x.rend())

using namespace std;
void solve()
{
    int n,k;
    long long ans=0;
    cin>>n>>k;
    vector<long long>a(n+1),b(n+1);
    for(int i=1; i<=n; i++)
    {
        int p;
        cin>>p;
        a[i]=k-(p%k);
        if(p%k==0)
            a[i]=0;
    }
    sort1(a);
    for(int i=1; i<=n; i++)
    {
        if(a[i]==0) continue;
        if(a[i]==a[i-1]) b[i]=b[i-1]+k;
        else b[i]=a[i];
        ans=max(ans,b[i]);
    }
    if(ans==0)
        cout<<0<<nl;
    else
        cout<<ans+1<<nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--){solve();}
    //solve();
    return 0;
}


