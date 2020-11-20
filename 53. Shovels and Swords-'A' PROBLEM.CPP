#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e;
        cin>>a>>b;
        d=max(a,b);
        e=min(a,b);
        c=d/2;
        if(c>=e)
            cout<<e<<endl;
        else
            cout<<(d/3+e/3)+(d%3+e%3)/3<<endl;
    }
}
/*
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
        if(a<b)
            swap(a,b);
        if(a/2>=b)
            cout<<b<<endl;
        else
            cout<<(a+b)/3<<endl;
    }
}

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
        if(a<b)
            swap(a,b);
        cout<<min(b,(a+b)/3)<<endl;
    }
}
*/


