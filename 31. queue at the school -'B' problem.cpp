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
    int n,t;
    string a;
    cin>>n>>t>>a;
    string b=a;
    while(t--)
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i]=='B' && a[i+1]=='G') swap(b[i],b[i+1]);
            if(i==n-2) a=b;
        }

    }
    cout<<a<<nl;
}
void solve1()
{
    int n,t;
    string a;
    cin>>n>>t>>a;
    while(t--)
    {
        for(int i=0; i<n-1; i++)
            if(a[i]=='B' && a[i+1]=='G') swap(a[i],a[i+1]),i++;
    }
    cout<<a<<nl;
}
int main()
{
    faster_io //multiple_test2
    //multiple_test
    single_test
    //count_time
    return 0;
}


