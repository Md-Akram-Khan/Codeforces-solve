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
bool cmp(string p,string q)
{
    return p.size()<q.size();
}
bool issubstring(string p,string q)
{
    for(int i=0; i<q.size(); i++)
    {
        if(q.substr(i,p.size())==p) return true;
    }
    return false;
}
void solve()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0; i+1<n; i++)
    {
        if(issubstring(a[i],a[i+1])==false)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    for(int i=0; i<n; i++)
        cout<<a[i]<<nl;
}
void solve1()
{
    int n;
    cin>>n;
    vector<pair<int,string>>v;
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        v.pb({a.size(),a});
    }
    sorta(v);
    bool ok;
    for(int i=0; i+1<n; i++)
    {
        string b=v[i].second,bb=v[i+1].second;
        //int sz1=v[i].first,sz2=v[i+1].first;
        ok=false;
        for(int j=0; j+sz1-1<sz2; j++)//for(int j=0; j<bb.size(); j++)
        {
            if(bb.substr(j,b.size())==b)
            {
                ok=true;
                break;
            }
        }
        if(!ok)
            break;
    }
    if(ok)
    {
        cout<<"YES\n";
        for(int i=0; i<n; i++)
            cout<<v[i].second<<nl;
    }
    else
        cout<<"NO\n";
}
int main()
{
    faster_io //multiple_test2
    //multiple_test
    single_test
    //count_time
    return 0;
}



