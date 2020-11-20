#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b;
    int c[b];
    set<int>d;
    for(int i=0; i<b; i++)
    {
        cin>>c[i];
        d.insert(c[i]);
    }
    cin>>x;
    int e[x];
    for(int i=0; i<x; i++)
    {
        cin>>e[i];
        d.insert(e[i]);
    }
    if(d.size()==a)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
