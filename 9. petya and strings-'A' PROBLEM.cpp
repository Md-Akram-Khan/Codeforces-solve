#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++)
    {
        a[i]=toupper(a[i]);
        b[i]=toupper(b[i]);
    }
    if(a==b)
        cout<<0<<endl;
    else if(min(a,b)==b)
        cout<<1<<endl;
    else
        cout<<-1<<endl;
}
void solve1()
{
    string a,b;
    cin>>a>>b;
    bool ok=false;
    for(int i=0; i<a.length(); i++)
    {
        a[i]=toupper(a[i]);
        b[i]=toupper(b[i]);
        if(a[i]>b[i])
        {
            cout<<1<<endl;
            ok=true;
            break;
        }
        else if(a[i]<b[i])
        {
            cout<<-1<<endl;
            ok=true;
            break;
        }
    }
    if(ok==false)
        cout<<0<<endl;
}
void solve2()
{
    char a[100],b[100];
    cin>>a>>b;
    cout<<strcmp(strlwr(a),strlwr(b))<<endl;
}
int main()
{
    solve2();
}

