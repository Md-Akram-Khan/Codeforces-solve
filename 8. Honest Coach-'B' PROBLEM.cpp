#include<bits./stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n;
        vector<int>a(n),b;
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=1; i<n; i++)
        {
            c=a[i]-a[i-1];
            b.push_back(c);
        }
        sort(b.begin(),b.end());
        cout<<b[0]<<endl;
    }
    return 0;
}

