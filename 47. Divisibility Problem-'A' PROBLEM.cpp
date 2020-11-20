#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        a=a%b;
        if(a==0)
            cout<<a<<endl;
        else
            cout<<b-a<<endl;
    }
    return 0;
}

