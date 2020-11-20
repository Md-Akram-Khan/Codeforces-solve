#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,b,sum=0; cin>>n>>k;
        string a; cin>>a;
        bool m=false;
        vector<int>x;
        for(int i=0; i<a.size(); i++)
            if(a[i]=='1')
            {
                m=true;
                x.push_back(i+1);
            }
        if(m)
        {
            sum +=(x[0]-1)/(k+1);
            for(int i=1; i<x.size(); i++)
                if((x[i]-x[i-1]-1)>(k+1))
                {
                    b=(x[i]-x[i-1]-1-(2*k));
                    sum+=ceil(b/(double)(k+1));
                }
            sum+=(n-x[x.size()-1])/(k+1);
            x.clear();
            cout<<sum<<endl;
        }
        else
            cout<<ceil(n/(double)(k+1))<<endl;
    }
}

