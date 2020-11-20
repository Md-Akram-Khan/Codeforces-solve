#include<bits/stdc++.h>

#define ll long long
#define pf push_front
#define np next_permutation
#define pp prev_permutation
#define fill(x,y) memset((x),y,sizeof(x))
#define rep(x,y,z) for(int x=y; x<z; x++)
#define rep1(x,y,z) for(int x=y; x>=z; x--)
#define all(x) (x).begin(),(x).end()

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,first,sec;
        cin>>a>>b>>c;
        if(a>=c && a*b>c)
            cout<<-1<<" "<<b<<endl;
        else if(a*b<=c)
            cout<<1<<" "<<-1<<endl;
        else
            cout<<1<<" "<<b<<endl;
    }
}

