#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long a,k,b;
        cin>>a>>k;
        while(k!=1)
        {
            long long x=0,y=9;
            b=a;
            while(b!=0)
            {
                x=max(x,b%10);
                y=min(y,b%10);
                b=b/10;
            }
            if(y==0)
                break;
            a = a + x*y;
            k--;
        }
        cout<<a<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long a,k;
        cin>>a>>k;

        while(k!=1)
        {
            string x=to_string(a);
            sort(x.begin(),x.end());
            if((x[0]-'0')==0)
                break;
            a += (x[0]-'0')*(x[x.size()-1]-'0');
            k--;
        }
        cout<<a<<endl;
    }
    return 0;
}
*/
