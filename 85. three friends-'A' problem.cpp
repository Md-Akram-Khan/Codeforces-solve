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
#define rev(x)             reverse(all(x))
#define iota(x,a)          iota(all(x),a)
#define sorta(x)           sort(all(x))
#define sortd(x)           sort(all(x),greater<int>())
#define csort(x,c)         sort(all(x),c)
#define rsort(x)           sort(x.rbegin(),x.rend())
#define faster_io          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define count_time         cerr<<nl<<"Time elapsed : "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms"<<nl;
#define all_ele(x)         for(auto i:(x)){cout<<i<<' ';}cout<<nl;
#define multiple_test      int t; cin>>t; while(t--){solve();}
#define multiple_test2     int t;cin>>t;for(int i=1; i<=t; i++){cout<<"Case #"<<i<<": "<<test()<<nl;}
#define single_test        solve();
using namespace std;
//vector<vector<int>>p(sz,vector<int>(sz,val));
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=1e18;
    for(ll i=a-1; i<=a+1; i++)
        for(ll j=b-1; j<=b+1; j++)
            for(ll k=c-1; k<=c+1; k++)
                ans=min(ans,abs(i-j)+abs(j-k)+abs(k-i));
    cout<<ans<<nl;
}
void solve1()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]!=a[1] && a[1]!=a[2]){a[0]++,a[2]--;}
    else if(a[0]!=a[1])
    {
        a[1]--,a[2]--;
        if(a[0]!=a[1]) a[0]++;
    }
    else if(a[1]!=a[2])
    {
        a[0]++,a[1]++;
        if(a[1]!=a[2]) a[2]--;
    }
    cout<<abs(a[0]-a[1])+abs(a[1]-a[2])+abs(a[0]-a[2])<<nl;
}
/*
ll test()
{
    return value;
}
*/
int main()
{
    faster_io //multiple_test2
    multiple_test
    //single_test
    //count_time
    return 0;
}



