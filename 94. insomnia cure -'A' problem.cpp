#include<bits/stdc++.h>
#define WELCOME_TO_AKRAM_CODE   using namespace std;
#define t                       298444XI
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
#define allele(x)              for(auto i:(x)){cout<<i<<' ';}cout<<nl;
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
void solve()
{
    int a,b,c,d,f,cnt=0;
    cin>>a>>b>>c>>d>>f;
    for(int i=1; i<=f; i++)
        if(i%a==0 || i%b==0 || i%c==0 || i%d==0) cnt++;
    cout<<cnt<<nl;
}
void solve1()
{
    int a,b,c,d,f,cnt=0;
    cin>>a>>b>>c>>d>>f;
    vector<bool>g(f+1,true);
    for(int i=1; i<=f; i++)
    {
        if(i%a==0) g[i]=false;
        else if(i%b==0) g[i]=false;
        else if(i%c==0) g[i]=false;
        else if(i%d==0) g[i]=false;
        if(g[i]==false) cnt++;
    }
    cout<<cnt<<nl;
}
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
void solve2()
{
    int e;
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>e;
    int ans=e/a[0]+e/a[1]+e/a[2]+e/a[3];
    for(int i=0; i+1<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            ans-=e/lcm(a[i],a[j]);
        }
    }
    for(int i=0; i+2<4; i++)
    {
        for(int j=i+1; j+1<4; j++)
        {
            for(int k=j+1; k<4; k++)
            {
                ans+=e/lcm(lcm(a[i],a[j]),a[k]);
            }
        }
    }
    ans-=e/lcm(lcm(a[0],a[1]),lcm(a[2],a[3]));
    cout<<ans<<nl;

}
int main()
{
    faster_io //multiple_test2
    //multiple_test
    single_test
    //count_time
    return 0;
}



