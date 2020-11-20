#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    set<char>b;
    for(int i=0; i<a.size(); i++)
    {
        b.insert(toupper(a[i]));
    }
    if(b.size()==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

