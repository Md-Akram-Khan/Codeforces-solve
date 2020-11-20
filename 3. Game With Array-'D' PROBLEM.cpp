#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,sum=0; cin>>n>>s;
    if(n>(s/2))
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(int i=0; i<n-1; i++)
        {
            cout<<"1 ";
            s--;
        }
        cout<<s<<endl<<s/2<<endl;
    }
    return 0;
}

