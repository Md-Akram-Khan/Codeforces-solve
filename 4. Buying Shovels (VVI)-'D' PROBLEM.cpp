#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,b=0;
        cin>>n>>k;
        if(k>=n)
            cout<<1<<endl;
        else
        {
            vector<int>a;
            for(int i=1; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    a.push_back(i);
                    a.push_back(n/i);
                }
            }
            sort(a.begin(),a.end());
            for(int i=a.size()-1; i>=0; i--)
                if(a[i]<=k)
            {
                cout<<n/a[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
