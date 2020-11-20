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
    int n;
    cin>>n;
    vector<int>a(n);
    int mn=101,mx=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    int p,q;
    for(int i=n-1; i>=0; i--)
    {
        if(mn==a[i])
        {
            p=i;
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(mx==a[i])
        {
           q=i;
           break;
        }
    }
    if(q<p)
        cout<<((n-1)-p)+q<<endl;
    else
        cout<<((n-1)-p)+q-1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t;cin>>t;while(t--){solve();}
    solve();
    return 0;
}


