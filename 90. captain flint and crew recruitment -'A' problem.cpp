#include<bits/stdc++.h>
#define nl                 "\n"
#define f                  front
#define s                  second
#define ll                 long long
#define pb                 push_back
#define pf                 push_front
#define np                 next_permutation
#define pp                 prev_permutation
#define sz(x)              x.size()
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
/*
ll test()
{
    return value;
}
*/
void solve()
{
    int n; cin>>n;
    vector<int>a;
    set<int>b;
    bool ok=true;
    if(n>30)
    {
        a.pb(6),a.pb(10),a.pb(14);
        int sum=30;
        for(int i=0; i<a.size(); i++)
        {
            if(n-30==a[i])
            {
                sum=sum-14;
                sum+=15;
                if(n-sum>0)
                {
                    cout<<"YES\n";
                    cout<<6<<' '<<10<<' '<<15<<' '<<(n-sum)<<nl;
                    return;
                }
                else
                {
                    cout<<"NO\n";
                    return;
                }
            }
        }
        cout<<"YES\n";
        cout<<6<<' '<<10<<' '<<14<<' '<<(n-sum)<<nl;
    }
    else
        cout<<"NO\n";
}
void solve1()
{
    int n;cin>>n;
    if(n<=30) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        if(n==36 || n==40 || n==44) cout<<6<<' '<<10<<' '<<15<<' '<<n-31<<nl;
        else cout<<6<<' '<<10<<' '<<14<<' '<<n-30<<nl;
    }
}
int main()
{
    faster_io //multiple_test2
    multiple_test
    //single_test
    //count_time
    return 0;
}


