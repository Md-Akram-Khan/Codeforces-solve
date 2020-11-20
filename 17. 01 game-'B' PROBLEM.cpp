#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        char ch;
        ch=a[0];
        int o=0,z=0,p=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]==ch)
            {
                o++;
            }
            else
            {
                if(o>z)
                    z++;
                else
                    p++;
            }
        }
        if(p!=0 && z!=0)
            {
                if((o-z)>p)
                    z=z+p;
                else
                    z+=(o-z);
            }
        if(min(o,z)%2==0)
            cout<<"NET"<<endl;
        else
            cout<<"DA"<<endl;
    }
    return 0;
}

