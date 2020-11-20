#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,b=0;
        cin>>n;
        vector<int>a(n+1);
        a[0]=0;
        for(i=1; i<n+1; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(i=1; i<n+1; i++)
        {
            if(a[i]<=i)
            {
                b=i;
            }
        }
        cout<<b+1<<endl;
    }
    return 0;
}


