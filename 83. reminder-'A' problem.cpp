#include<bits/stdc++.h>

#define nl                 "\n"
#define ll                 long long
#define pb                 push_back
#define pf                 push_front
#define np                 next_permutation
#define pp                 prev_permutation
#define sqr(x)             ((x)*(x))
#define pi                 acos(-1)
#define setprecision(x)    fixed<<setprecision((int)(x))
#define mem1(x)            memset(x,0,sizeof(x))
#define mem2(x)            memset(x,-1,sizeof(x))
#define all(x)             (x).begin(),(x).end()
#define sort1(x)           sort(all(x))
#define csort(x,c)         sort(all(x),c)
#define rsort(x)           sort(x.rbegin(),x.rend())
#define faster_io          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define multiple_test      int t; cin>>t; while(t--){solve();}
#define single_test        solve();
using namespace std;
void solve()
{
    int n,x,y,cnt=0;
    cin>>n>>x>>y;
    string a,b;
    cin>>a;
    int fzero=x-y-1;
    for(int i=1; i<=fzero; i++)
        b.push_back('0');
    b.push_back('1');
    for(int i=1; i<=y; i++)
        b.push_back('0');
    int p=n-1;
    for(int i=x-1; i>=0; i--)
    {
        if(a[p]!=b[i])
            cnt++;
        p--;
    }
    cout<<cnt<<nl;
}
void solve1()
{
    int n,x,y;
    string a;
    cin>>n>>x>>y>>a;
    rev(a);
    int c=0;
    for(int i=0; i<x; i++)
    {
        if(i==y && a[i]!='1') c++;
        else if(i!=y && a[i]!='0') c++;
    }
    cout<<c<<nl;
}
int main()
{
    faster_io;
    //multiple_test
    single_test
    return 0;
}



