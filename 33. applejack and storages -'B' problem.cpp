#include<bits/stdc++.h>
#define WELCOME_TO_AKRAM_CODE   using namespace std;
#define nl                      "\n"
#define f                       first
#define s                       second
#define ll                      long long
#define pb                      push_back
#define pf                      push_front
#define np                      next_permutation
#define pp                      prev_permutation
#define sz(x)                   x.size()
#define sqr(x)                  ((x)*(x))
#define pi                      acos(-1)
#define mod                     1000000007
#define setprecision(x)         fixed<<setprecision((int)(x))
#define mem1(x)                 memset(x,0,sizeof(x))
#define mem2(x)                 memset(x,-1,sizeof(x))
#define all(x)                  (x).begin(),(x).end()
#define rev(x)                  reverse(all(x))
#define iota(x,a)               iota(all(x),a)
#define sorta(x)                sort(all(x))
#define sortd(x)                sort(all(x),greater<int>())
#define csort(x,c)              sort(all(x),c)
#define rsort(x)                sort(x.rbegin(),x.rend())
#define allup(x)                transform(x.begin(),x.end(),x.begin(),::toupper)
#define alllow(x)               transform(x.begin(),x.end(),x.begin(),::tolower)
#define faster_io               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define count_time              cerr<<nl<<"Time elapsed : "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms"<<nl;
#define allele(x)               for(auto i:(x)){cout<<i<<' ';}cout<<nl;
#define multiple_test           int t; cin>>t; while(t--){solve();}
#define multiple_test2          int t;cin>>t;for(int i=1; i<=t; i++){cout<<"Case #"<<i<<": "<<test()<<nl;}
#define single_test             solve();

WELCOME_TO_AKRAM_CODE
//vector<vector<int>>p(sz,vector<int>(sz,val));
/*
ll test()
{
    return value;
}
*/
vector<int>cnt(100001);
bool is_ok()
{
    if(cnt[8]>0) return true;
    else if(cnt[4]>1) return true;
    else if(cnt[4]>0 && cnt[2]>2) return true;
    else if(cnt[6]>0 && cnt[2]>1) return true;
    else return false;
}
void solve()
{
    int n; cin>>n;
    map<int,int>m;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        m[a]++;
        cnt[m[a]]++;
    }
    int mm; cin>>mm;
    while(mm--)
    {
        char c;int b;
        cin>>c>>b;
        if(c=='+') m[b]++,cnt[m[b]]++;
        else cnt[m[b]]--,m[b]--;
        if(is_ok()==true) cout<<"YES\n";
        else cout<<"NO\n";
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



