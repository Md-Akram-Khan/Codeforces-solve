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
int dx[4]= {-1,1,0,0};
int dy[4]= {0,0,1,-1};

WELCOME_TO_AKRAM_CODE
//vector<vector<int>>p(sz,vector<int>(sz,val));
/*
ll test()
{
    return value;
}
*/
/*      0 O
         ^
*/
int gcd2(long long a,long long b)
{
    if(b==0) return a;
    return gcd2(b,a%b);
}
void solve()
{
    int n,m;
    cin>>n;
    vector<int>a(n),c;
    for(int i=0; i<n; i++) cin>>a[i];
    sortd(a);
    c.pb(a[0]);
    m=a[0];
    a.erase(a.begin());
    while(a.size()!=0)
    {
        int mx=-1,index,z;
        for(int i=0; i<a.size(); i++)
        {
            z=__gcd(m,a[i]);
            if(z>mx)
            {
                mx=z;
                index=i;
            }
        }
        c.pb(a[index]);
        a.erase(a.begin()+index);
        m=mx;
    }
    allele(c);
}
/*      O 0
         U
*/
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //faster_io //multiple_test2
    multiple_test
    //single_test
    //count_time
    return 0;
}

