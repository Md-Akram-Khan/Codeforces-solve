#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p,c=0;
    cin>>n>>k;
    string a;
    set<char>b;
    while(n--)
    {
        cin>>a;
        for(int i=0; i<a.size(); i++)
        {
            p=a[i]-'0';
            if(p<=k)
            {
              b.insert(p);
            }
        }
        if(b.size()==k+1)
            c++;
        b.clear();
    }
    cout<<c<<endl;
    return 0;
}

