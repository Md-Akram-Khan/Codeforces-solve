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
    vector<bool>a(1000000001,true);
    int c=1;
    a[n]=false;
    while(1)
    {
        n+=1;
        while(n%10==0)
            n/=10;
        if(a[n]==false)
            break;
        a[n]=false;
        c++;
    }
    cout<<c<<nl;
}
void solve1()
{
    int n;
    cin>>n;
    map<int,int>a;
    a[n]++;
    while(1)
    {
        n+=1;
        while(n%10==0)
            n/=10;
        if(a[n]==0)
            a[n]++;
        else
            break;
    }
    cout<<a.size()<<nl;
}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //int t; cin>>t; while(t--){solve();}
    solve1();
    return 0;
}


