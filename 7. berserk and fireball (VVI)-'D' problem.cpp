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
    int n,m,x,k,y;
    cin>>n>>m>>x>>k>>y;
    vector<int>a(n+2),b(m+2),c;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=m; i++)
        cin>>b[i];
    long long sum=0;
    int j=1,w=0;
    for(int i=1; i<n+2; i++)
    {
        if(a[i]!=b[j]) c.pb(a[i]);
        else
        {
            sort1(c);
            long long mx=max(b[j],b[j-1]),sz=c.size(),p=k*y;

            if(sz==0) {j++,w++;continue;}
            if(c[sz-1]>mx && sz<k) {cout<<-1<<nl;return;}
            if(p<x)
            {
                if(c[sz-1]<mx) sum+=(sz*y);
                else sum+=(sz-k)*y+x;
            }
            else
            {
                sum+=(sz/k)*x;
                sum+=(sz%k)*y;
            }
            w++;
            j++;
            c.clear();
        }
    }
    if(w-1!=m) cout<<-1<<nl;
    else cout<<sum<<nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--){solve();}
    solve();
    return 0;
}



