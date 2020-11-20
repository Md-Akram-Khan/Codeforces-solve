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
/*
       -------------------------
      |  AUTHOR: Md. Akram Khan |
       -------------------------
       -----------------------------------
      |  DATE:31 JULY, 2020  TIME: 11:48  |
       -----------------------------------
       -----------------------------------------------
      |  EID-MUBARAK HUMBAAAAAAAAAAAAAAAAAAAAAAAA :)) |
       -----------------------------------------------
*/
    vector<vector<int>>p(3,vector<int>(3,0));
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int a;
            cin>>a;
            p[i][j]+=a;
            if(i-1>=0)
                p[i-1][j]+=a;
            if(i+1<3)
                p[i+1][j]+=a;
            if(j-1>=0)
                p[i][j-1]+=a;
            if(j+1<3)
                p[i][j+1]+=a;
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(p[i][j]%2==0)
                cout<<1;
            else
                cout<<0;
        }
        cout<<nl;
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


