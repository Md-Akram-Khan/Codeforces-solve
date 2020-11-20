#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,a,sum=0; cin>>n;
        vector<int>b(n+2,0);
        for(int i=0; i<n; i++)
        {
            cin>>a;
            b[a]++;
        }
        for(int i=1; i<n+1; i++)
        {
            sum+=b[i]/i;
            b[i+1]+=b[i]%i;
        }
        cout<<sum<<endl;
    }
    return 0;
}

