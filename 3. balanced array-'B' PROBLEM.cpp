#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a; cin>>a;
    long long m,n,i,j,k;
    while(a--)
    {
        int p=2,q=1,sum1=0,sum2=0,y;
        cin>>m;
        n = m/2;
        int a[n];
        if(n%2==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(j=1; j<=n; j++)
            {
                cout<<p<<" ";
                sum1 += p;
                p += 2;
            }
            for(j=0; j<n; j++)
            {
                a[j]=q;
                q += 2;
                sum2 += a[j];
            }
            while(sum1!=sum2)
            {
                a[n-1]+=2;
                sum2 += 2;
            }
            for(j=0; j<n; j++)
                cout<<a[j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}

