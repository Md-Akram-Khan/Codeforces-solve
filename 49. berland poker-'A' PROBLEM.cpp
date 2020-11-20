/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(n/k>=m)
            cout<<m<<endl;
        else
            cout<<(n/k)-ceil((m-(n/k))/double(k-1))<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,k,x,y;
        scanf("%d%d%d",&n,&m,&k);
        x = min(m, n/k);
        y =ceil((m - x)/double(k - 1));
        printf("%d\n",x-y);
    }
}

