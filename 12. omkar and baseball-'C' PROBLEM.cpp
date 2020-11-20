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
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++) cin>>a[i];
    int f=0,l=0;
    for(int i=1; i<=n; i++) if(a[i]!=i) {f=i; break;}
    for(int i=n; i>=1; i--) if(a[i]!=i) {l=i; break;}
    if(f==0) cout<<0<<nl;
    else
    {
        bool ok=true;
        for(int i=f; i<=l; i++) if(a[i]==i) {ok=false; break;}
        if(ok) cout<<1<<nl;
        else cout<<2<<nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--){solve();}
    //solve();
    return 0;
}



