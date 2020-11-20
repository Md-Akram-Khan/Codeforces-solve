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
#define rev(x)             reverse(all(x))
#define iota(x,a)          iota(all(x),a)
#define sorta(x)           sort(all(x))
#define sortd(x)           sort(all(x),greater<int>())
#define csort(x,c)         sort(all(x),c)
#define rsort(x)           sort(x.rbegin(),x.rend())
#define faster_io          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all_ele(x)         for(auto i:(x)){cout<<i<<' ';}cout<<nl;
#define multiple_test      int t; cin>>t; while(t--){solve();}
#define single_test        solve();
using namespace std;
//vector<vector<int>>p(sz,vector<int>(sz,val));
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++)
    {
        if(abs(a[i]-a[i-1])!=1)
        {
            if(abs(a[i]-a[i-1])!=n-1)
            {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}
int main()
{
    faster_io;
    multiple_test
    //single_test
    return 0;
}



