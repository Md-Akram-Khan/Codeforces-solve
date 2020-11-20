#include<bits/stdc++.h>
using namespace std;
int gcd(long long a,long long b)
{
    long long r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    long long l,r;
    int c=0;
    string a;
    cin>>l>>r;
    for(long long i=l; i<=r-2; i++)
    {
        for(long long j=i+1; j<=r-1; j++)
        {
            for(long long k=j+1; k<=r; k++)
            {
                if(gcd(i,j)==1 && gcd(j,k)==1 && gcd(i,k)!=1)
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    c++;
                    return 0;
                }

            }
        }
    }
    if(c==0)
        cout<<-1<<endl;
    return 0;
}

