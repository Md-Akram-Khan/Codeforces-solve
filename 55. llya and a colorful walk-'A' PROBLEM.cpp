#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,b;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[0]!=a[i])
            c=i+1;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(a[n-1]!=a[i])
            b=i+1;
    }
    cout<<max(c-1,n-b)<<endl;
}
/*
good way
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++)
        cin>>a[i];
    for(int i=t-1; i>0; i--)
    {
        if(a[0]!=a[i])
        {
           m=abs(i-0);
           break;
        }
    }
    for(int i=0; i<t; i++)
    {
        if(a[t-1]!=a[i])
        {
           n=abs(i-(t-1));
           break;
        }
    }
    cout<<max(m,n)<<endl;
}

better way
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    if(a[1]!=a[n])
    {
       cout<<n-1<<endl;
       return 0;
    }
    int ans=0;
    for(int i=2; i<=n; i++)
    {
        if(a[1]!=a[i])
        {
            ans=max(ans,n-i);
            ans=max(ans,i-1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
*/
