#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string p;
    cin>>p;
    int a=0,b=0,c=0;
    for(int i=0; i<n; i++)
    {
        if(p[i]=='(')
            a++;
        else
        {
            if(a>b)
                b++;
            else
                c++;
        }
    }
    cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

