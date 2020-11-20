#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,d;
    long long b,sum;
    cin>>a;
    int c[a];
    for(int i=0; i<a; i++)
    {
       cin>>c[i];
    }
    for(int i=0; i<a; i++)
    {
        sum = 1;
        for(long long k=2;; k++)
        {
            sum += pow(2,(k-1));
            if(c[i]%sum==0)
            {
                d=c[i]/sum;
                break;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
