#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long k=(n-1)/2;
        cout<<(4*k*(k+1)*(2*k+1))/3<<endl;
    }
    return 0;
}
