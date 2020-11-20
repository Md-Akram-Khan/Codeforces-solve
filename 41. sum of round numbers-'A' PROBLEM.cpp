#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,p=0;
        cin>>n;
        vector<int>a;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            if(r==0)
            {
                p++;
                continue;
            }
            else
            {
                a.push_back(r*pow(10,p));
                p++;
            }
        }
        cout<<a.size()<<endl;
        for(int i=0; i<a.size(); i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}

