#include<bits/stdc++.h>
#define nl                 "\n"
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
    vector<int>a(n);
    int o=0,e=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==1)o++;
        else         e++;
    }
    sorta(a);
    if(min(o,e)==o)
    {
        int x=min(o,e);
        int y=x+1;
        for(int i=n-1; i>=0 && (x!=0 || y!=0); i--)
        {
            //if(x==0 && y==0)
                //break
            if(a[i]%2==1 && x!=0)
            {
                a[i]=0,x--;
            }
            else if(a[i]%2==0 && y!=0)
            {
                a[i]=0,y--;
            }
        }
    }
    else
    {
        int x=min(o,e);
        int y=x+1;
        for(int i=n-1; i>=0 && (x!=0 || y!=0); i--)
        {
            if(a[i]%2==0 && x!=0)
            {
                a[i]=0,x--;
            }
            else if(a[i]%2==1 && y!=0)
            {
                a[i]=0,y--;
            }
        }
    }
    ll sum=accumulate(a.begin(),a.end(),0);
    cout<<sum<<nl;
}
void solve1()
{
    int n; cin>>n;
    vector<int>o,e;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        if(a%2==0) e.pb(a);
        else o.pb(a);
    }
    sorta(e),sorta(o);
    ll sum=0;
    if(e.size()<o.size())
    {
        int r=o.size()-e.size()-1;
        for(int i=0; i<r; i++)sum+=o[i];
        cout<<sum<<nl;
    }
    else
    {
        int r=e.size()-o.size()-1;
        for(int i=0; i<r; i++)sum+=e[i];
        cout<<sum<<nl;
    }
}
int main()
{
    faster_io //multiple_test2
    //multiple_test
    single_test
    //count_time
    return 0;
}


