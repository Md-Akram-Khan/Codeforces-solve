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
    if(n%2==0)
        cout<<n/2<<" "<<n/2<<nl;
    else
    {
        int m=sqrt(n);
        if(m*m==n)
            cout<<m<<" "<<n-m<<nl;
        else
        {
            int f=1,l=n-1;
            for(int i=3; i<=m; i+=2)
            {
                if(n%i==0)
                {
                    f=n/i;
                    l=(n-f);
                    break;
                }
            }
            cout<<f<<" "<<l<<nl;
        }
    }
}
void solve1()
{
    int n;
    cin>>n;
    int f=1,l=n-1;
    int limit=sqrt(n);
    for(int i=2; i<=limit; i++)
    {
        if(n%i==0)
        {
            f=n/i;
            l=n-f;
            break;
        }
    }
    cout<<f<<" "<<l<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--){solve1();}
    //solve();
    return 0;
}


