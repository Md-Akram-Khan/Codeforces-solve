#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<long long>x;
    if(n==1 && t==10)
        cout<<-1<<endl;
    else
    {
        if(t==10)
        {
            for(int j=0; j<n-1; j++)
            {
                x.push_back(1);
            }
            x.push_back(0);
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                x.push_back(t);
            }
        }
        for(int i=0; i<x.size(); i++)
            {
                 cout<<x[i];
            }
    }
    return 0;
}
