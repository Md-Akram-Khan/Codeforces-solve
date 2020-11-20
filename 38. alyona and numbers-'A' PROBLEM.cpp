#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    long long ans,x[5],y[5];
    cin>>a>>b;
    for(int i=0; i<5; i++)
    {
        x[i]=0;
        y[i]=0;
    }
    for(int i=1; i<=a; i++)
        x[i%5]++;
    for(int i=1; i<=b; i++)
        y[i%5]++;

    ans = x[0]*y[0] + x[1]*y[4] + x[2]*y[3] + x[3]*y[2] + x[4]*y[1];
    cout<<ans<<endl;
    return 0;
}

