#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i;
    cin>>m>>n;
    int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(i=0; i<15; i++){
        if(a[i]==m){
            if(a[i+1]==n)cout<<"YES"<<endl;
            else         cout<<"NO"<<endl;
            return 0;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,c,i;
    cin>>m>>n;
    for(i=m+1;i<=n;i++)
    {
        c=0;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)c++;
        }
        if(c==0)break;
    }
    if(i==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

