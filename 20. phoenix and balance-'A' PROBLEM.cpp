#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t,a;cin>>t;
    while(t--)
    {
        cin>>a;
        long long sum1=0,sum2=0;
            sum1 += pow(2,a);
        for(int i=1; i<(a/2); i++)sum1 += pow(2,i);
        for(int j=(a/2); j<a; j++)sum2 += pow(2,j);
        cout<<sum1-sum2<<endl;
    }
    return 0;
}
