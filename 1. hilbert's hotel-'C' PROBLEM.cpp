#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]=a[i]+i;
            a[i]=a[i]%n;
            if(a[i]<0)
                a[i]=a[i]+n;
        }
        sort(a,a+n);
        int c=0;
        for(long long i=1; i<n; i++)
        {
            if(a[i]==a[i-1])
            {
                c++;
                break;
            }
        }
        if(c==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
