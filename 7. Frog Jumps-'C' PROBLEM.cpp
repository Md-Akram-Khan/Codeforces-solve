#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        vector<int>b;
        b.push_back(0);
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='R')
               b.push_back(i+1);
        }
        b.push_back(a.size()+1);
        int c=-1;
        for(int i=1; i<b.size(); i++)
            c=max(c,b[i]-b[i-1]);
        cout<<c<<endl;
    }
    return 0;
}

