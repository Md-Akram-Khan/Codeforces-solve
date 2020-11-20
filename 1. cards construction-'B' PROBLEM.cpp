#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long k;
    while(t--)
    {
       cin>>k;
       int c=0;
       while(1)
       {
          if(k<2)
            break;
          for(int i=1;;i++)
          {
              if((i*(3*i+1)/2)>k)
              {
                  c++;
                  k -= (i-1)*(3*(i-1)+1)/2;
                  break;
              }
          }
       }
       cout<<c<<endl;
    }
    return 0;
}

