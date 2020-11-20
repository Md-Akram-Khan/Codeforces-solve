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
#define rep(i,n,m)         for(int i=(int)(n); i<(int)(m); i++)

using namespace std;
typedef map<int,int> mapii;
typedef map<string,int> mapsi;
typedef map<int,string> mapis;
typedef vector<int> vi;
typedef vector<vi> v2d;
typedef vector<long long> vll;
void solve()
{
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        bool ok=true;
        for(int i=1; i<n; i++)
        {
            if(a[i-1]>a[i])
            {
                if(a[0]>a[i])
                    ok=false;

            }
            if(ok==false)
            {
                if(a[0]<a[i])
                    ok=true;
            }
        }
        if(ok)
            cout<<"Yes\n";
        else
            cout<<"No\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    //solve();
    return 0;
}


