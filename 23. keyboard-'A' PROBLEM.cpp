#include<bits/stdc++.h>
using namespace std;
int main()
{
    char d;
    cin>>d;
    string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string b,c;
    cin>>b;
    for(int i=0; i<b.size(); i++)
    {
        for(int j=0; j<a.size(); j++)
        {
            if(b[i]==a[j])
            {
                if(d=='R')
                    c.push_back(a[j-1]);
                else
                    c.push_back(a[j+1]);
            }
        }
    }
    cout<<c<<endl;
    return 0;
}

