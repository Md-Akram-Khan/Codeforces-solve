#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int j=2; j<=n; j++)
        {
            if(n%j==0)
            {
                n=n+j;
                break;
            }
        }
        cout<<n+(2*(k-1))<<endl;
    }
    return 0;
}

