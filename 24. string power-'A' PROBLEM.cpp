#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long long ans=0,c=0;
    for(long long i=0; i<a.size(); i++)
    {
        if(a.substr(i,5)=="heavy")
            c++;
        else if(a.substr(i,5)=="metal")
            ans += c;
    }
    cout<<ans<<endl;
}


