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
/*      0 O
         ^
*/
     // thank's to "prezent" for solving this problem easiest way for beginner like me :)
void solve()
{
    int n,cnt=0,bosses=0;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++) cin>>a[i];
    a[n]=0;
    if(a[0]==1) cnt++;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==1) bosses++;
        else
        {
            if(bosses>0)
            {
                cnt+=bosses/3;
                bosses=0;
            }
        }
    }
    cout<<cnt<<nl;
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
