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

using namespace std;
void solve()
{
    int n,k;
    string a,b;
    cin>>n>>k>>a;
    b=a;
    int l=0;
    for(int i=0; i<n-1; i++)
        if(a.substr(0,i+1)==a.substr(n-i-1)) l=i+1;

    for(int i=1; i<k; i++) b+=a.substr(l);
    cout<<b<<nl;

}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    //int t; cin>>t; while(t--){solve();}
    solve();
    return 0;
}



