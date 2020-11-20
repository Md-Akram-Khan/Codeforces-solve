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
    int n,i,ans=1;
    cin>>n;
    vector<int>a(n);
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=n-2; i>=0 ;i--)
    {
        if(a[i]>=a[i+1]) ans++;
        else break;
    }
    for(i=i; i>=0 ;i--)
    {
        if(a[i]<=a[i+1]) ans++;
        else break;
    }
    cout<<n-ans<<nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;while(t--){solve();}
    //solve();
    return 0;
}


