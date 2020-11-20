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
        int x,y,n;
        cin>>x>>y>>n;
        int a=n%x;
        if(a>=y)
            cout<<n-(a-y)<<endl;
        else
            cout<<(n-x)+(y-a)<<endl;
    }
    return 0;
}


