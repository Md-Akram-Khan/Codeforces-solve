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
    bool h=false,e=false,o=false;
    int l=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='h')
            h=true;
        else if(a[i]=='e')
        {
            if(h==true)
                e=true;
        }
        else if(a[i]=='l')
        {
            if(e==true)
                l++;
        }
        else if(a[i]=='o')
        {
            if(l>=2)
            {
                o=true;
                break;
            }
        }
    }
    if(o==true)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
void solve1()
{
    string a;
    cin>>a;
    string b="hello";
    int c=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[c])
            c++;
        if(c==5)
            break;
    }
    if(c==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--){solve();}
    solve1();
    return 0;
}


