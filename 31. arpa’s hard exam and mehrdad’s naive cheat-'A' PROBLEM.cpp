#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==0)
        cout<<1<<endl;
    else if(n%4==1)
        cout<<8<<endl;
    else if(n%4==2)
        cout<<4<<endl;
    else if(n%4==3)
        cout<<2<<endl;
    else
    cout<<6<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int a[]={6,8,4,2};
    if(n==0)
        cout<<1<<endl;
    else
        cout<<a[n%4]<<endl;
    return 0;
}
