#include<bits/stdc++.h>

#define test        int t; cin>>t; while(t--)
#define ll          long long
#define pf          push_front
#define np          next_permutation
#define pp          prev_permutation
#define ub          upper_bound
#define lb          lower_bound
#define fill(x,y)   memset((x),y,sizeof(x))
#define rep(x,y,z)  for(int x=y; x<z; x++)
#define rep1(x,y,z) for(int x=y; x>=z; x--)
#define all(x)      (x).begin(),(x).end()

using namespace std;
/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int c=0;
        while(n>1)
        {
            m=n%6;
            if(m!=0 && m!=3)
                break;
            if(m==0)
                n=n/6;
            else
                n=n*2;
            c++;
        }
        if(n==1)
            cout<<c<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
*/
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a=0,b=0;
        while(n%2==0) n/=2,a++;
        while(n%3==0) n/=3,b++;
        if(n!=1||a>b)
            cout<<-1<<endl;
        else
            cout<<b+b-a<<endl;
    }
}
*/

