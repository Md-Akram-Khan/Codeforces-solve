#include<bits/stdc++.h>
//AJAIRA JINISH SHORO
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
//AJAIRA JINISH SHESH
using namespace std;
void solve()
{
    int k,n,w;
    cin>>k>>n>>w;
    long long need=(w*(2*k+(w-1)*k))/2;
    if(n>=need)
        cout<<0<<nl;
    else
        cout<<need-n<<nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--){solve();}
    solve();
    return 0;
}


