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
#define lb(x,a)                 lower_bound(all(x),a)-(x).begin()
#define lb1(x,a)                lower_bound(all(x),a)-(x).begin()-1
#define allup(x)                transform(x.begin(),x.end(),x.begin(),::toupper)
#define alllow(x)               transform(x.begin(),x.end(),x.begin(),::tolower)
#define faster_io               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define count_time              cerr<<nl<<"Time elapsed : "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms"<<nl;
#define allele(x)               for(auto i:(x)){cout<<i<<' ';}cout<<nl;
#define multiple_test           int t; cin>>t; while(t--){solve();}
#define multiple_test2          int t;cin>>t;for(int i=1; i<=t; i++){cout<<"Case #"<<i<<": "<<test()<<nl;}
#define single_test             solve1();
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
void solve()
{
    int n;
    string a;
    cin>>n>>a;
    if(n==6) cout<<"espeon"<<nl;
    else if(n==8)cout<<"vaporeon"<<nl;
    else
    {
        string b[6]={"jolteon","flareon","umbreon","leafeon","glaceon","sylveon"};
        map<char,int>m;
        m['j']=1,m['f']=2,m['u']=3,m['g']=5,m['s']=6,m['o']=1,m['m']=3,m['e']=4,m['y']=6,m['b']=3,m['t']=1,m['f']=4,m['c']=5,m['v']=6;
        for(int i=0; i<4; i++)
        {
            int n=m[a[i]];
            if(n!=0) {cout<<b[n-1]<<nl;return;}
        }
        cout<<"flareon"<<nl;
    }
}
void solve1()
{
    int n;
    string a;
    cin>>n>>a;
    if(n==6) cout<<"espeon"<<nl;
    else if(n==8)cout<<"vaporeon"<<nl;
    else
    {
        string b[6]={"jolteon","flareon","umbreon","leafeon","glaceon","sylveon"};
        for(int i=0; i<6; i++)
        {
            string c=b[i];
            bool ok=true;
            for(int j=0; j<7; j++)
            {
                if(a[j]!='.' && a[j]!=c[j])
                {
                    ok=false;
                    break;
                }
            }
            if(ok) {cout<<c<<nl;break;}
        }
    }
}
/*      O 0
         U
*/
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //faster_io //multiple_test2
    //multiple_test
    single_test
    //count_time
    return 0;
}
