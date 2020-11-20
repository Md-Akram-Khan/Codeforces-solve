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
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int mx=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
            mx=max(mx,a[i][j]);
        }
    }
    if(mx>4)
    {
        cout<<"NO\n";
        return;
    }
    if(a[0][0]>2 || a[0][m-1]>2 || a[n-1][0]>2 || a[n-1][m-1]>2)
    {
        cout<<"NO\n";
        return;
    }
    for(int i=0; i<m; i++)
    {
        if(a[0][i]>3 || a[n-1][i]>3)
        {
            cout<<"NO\n";
            return;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i][0]>3 || a[i][m-1]>3)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if((i==0 || i==n-1)&&(j==0 || j==m-1))
                cout<<2<<" ";
            else if(i==0 || i==n-1 || j==0 || j==m-1)
                cout<<3<<" ";
            else
                cout<<4<<" ";
        }
        cout<<nl;
    }
}
void solve1()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    bool ok=true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
            int value=2;
            if(i>0 && i<n-1)
               value++;
            if(j>0 && j<m-1)
                value++;
            if(a[i][j]>value)
                ok=false;
            else
                a[i][j]=value;
        }
    }
    if(!ok)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<nl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--){solve1();}
    //solve1();
    return 0;
}


