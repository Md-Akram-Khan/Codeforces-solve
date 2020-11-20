#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a,c=0;
    cin>>a;
    int b[a];
    long long sum1=0,sum2=0;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        sum1 += b[i];
    }
    sort(b,b+a);
    for(int i=a-1; i>=0; i--)
    {
        sum2 += b[i];
        c++;
        if(sum2>sum1-sum2)
            break;
    }
    cout<<c<<endl;
    return 0;
}
