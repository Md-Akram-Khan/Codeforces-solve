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
#define gcd(x,y)                __gcd(x,y)
#define mod                     1000000007
#define max3(a,b,c)             max(max(a,b),c)
#define max4(a,b,c,d)           max(max3(a,b,c),d)
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
#define lb(x,a)                 lower_bound(all(x),a)-(x).begin()
#define lb1(x,a)                lower_bound(all(x),a)-(x).begin()-1
#define allup(x)                transform(all(x),(x).begin(),::toupper)
#define alllow(x)               transform(all(x),(x).begin(),::tolower)
#define faster_io               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define count_time              cerr<<nl<<"Time elapsed : "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms"<<nl;
#define input(x,n)              for(int i=0; i<(int)n; i++) cin>>x[i];
#define input2d(x)              for(int i=0; i<(int)r; i++) for(int j=0; j<(int)c; j++) cin>>x[i][j];
#define allele(x)               for(auto i:(x)){cout<<i<<' ';}cout<<nl;
#define allele2d(x,r,c)         for(int i=0; i<(int)r; i++) {for(int j=0; j<(int)c; j++) cout<<x[i][j]<<' '; cout<<nl;}
#define multiple_test           int t; cin>>t; while(t--){solve();}
#define multiple_test2          int t;cin>>t;for(int i=1; i<=t; i++){cout<<"Case #"<<i<<": "<<test()<<nl;}
#define single_test             solve();
//int dx[4]= {-1,1,0,0};
//int dy[4]= {0,0,1,-1};
//ceil(a/b)=(a+b-1)/b
WELCOME_TO_AKRAM_CODE
//vector<vector<int>>p(sz,vector<int>(sz,val));
/*
ll test()
{
    return value;
}
*/
/*      0 O   :'(
         ^
*/
void solve()
{
    int n,x,y,z;
    cin>>n>>x>>y;
    for(int i=1; i<50;i++)
    {
        if((y-x)%i==0 && (y-x)/i<n) {z=i;break;}
    }
    for(int i=x; i<=y; i+=z) {cout<<i<<' ';n--;}
    for(int i=x-z; i>=1 && n>0; i-=z) {cout<<i<<' ';n--;}
    for(int i=y+z; n>0; i+=z) {cout<<i<<' ';n--;}
    cout<<nl;
}
/*      O 0
         U
*/
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    faster_io //multiple_test2
    multiple_test
    //single_test
    //count_time
    return 0;
}
