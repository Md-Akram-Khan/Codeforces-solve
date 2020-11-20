#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long a,b,c,d; cin>>a>>b>>c>>d;
        if(a<=b)
            cout<<b<<endl;
        else if(c<=d)
            cout<<-1<<endl;
        else
            {
                a=ceil((a-b)/double(c-d));
                cout<<b+a*c<<endl;
            }
    }
    return 0;
}

