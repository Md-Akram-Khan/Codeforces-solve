#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,c=0; cin>>n;
        int a[2*n];
        for(int i=0; i<2*n; i++)
            cin>>a[i];
        for(int i=0; i<2*n-1; i++)
        {
            for(int j=i+1; j<2*n; j++)
            {
                if(a[i]==0 || a[j]==0)
                    continue;
                if(a[i]%2==0 && a[j]%2==0)
                {
                    a[i]=0;
                    a[j]=0;
                    cout<<i+1<<" "<<j+1<<endl;
                    c++;
                    if(i+1==j)
                         i=j;
                    break;
                }
                if(a[i]%2==1 && a[j]%2==1)
                {
                    a[i]=0;
                    a[j]=0;
                    cout<<i+1<<" "<<j+1<<endl;
                    c++;
                    if(i+1==j)
                         i=j;
                    break;
                }
            }
            if(c==n-1)
                break;
        }

    }
}

