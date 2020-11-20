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
    string a;
    cin>>a;
    int x=a.size();

    int r=0,p=0,s=0;
    for(int i=0; i<x; i++)
    {
        if(a[i]=='R') r++;
        else if(a[i]=='P') p++;
        else s++;
    }

    char ch;
    if(max(max(r,p),s)==r) ch='P';
    else if(max(max(r,p),s)==p) ch='S';
    else ch='R';

    string b(x,ch);
    cout<<b<<nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--){solve();}
    //solve();
    return 0;
}


