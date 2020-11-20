#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<a[0];
        for(int i=1; i<a.size(); i+=2)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}

