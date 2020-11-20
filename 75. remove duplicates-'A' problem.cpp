#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n+1),b(1001),c;
    set<int>d;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        d.insert(a[i]);
    }
    for(int i=n; i>=1; i--)
    {
        if(b[a[i]]==0)
            c.push_back(a[i]);
        b[a[i]]++;
    }
    cout<<d.size()<<endl;
    for(int i=c.size()-1; i>=0; i--)
        cout<<c[i]<<' ';
    cout<<endl;
}
