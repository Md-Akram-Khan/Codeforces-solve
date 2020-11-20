#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>a(1000),b(1000),c;

bool sorted()
{
    for(int i=0; i<n; i++)
        if(a[i]!=i) return false;
    return true;
}
int MAX()
{
    for(int i=0; i<=n; i++)
        if(b[i]==0) return i;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<=n; i++) b[i]=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        while(sorted()==false)
        {
            int mex=MAX();
            if(mex==n)
            {
                for(int i=0; i<n; i++)
                {
                    if(i!=a[i])
                    {
                        b[a[i]]--;
                        b[mex]++;
                        a[i]=mex;
                        c.push_back(i);
                        break;
                    }
                }
            }
            else
            {
                b[a[mex]]--;
                b[mex]++;
                a[mex]=mex;
                c.push_back(mex);
            }
        }
        cout<<c.size()<<endl;
        for(int i=0; i<c.size(); i++)
            cout<<c[i]+1<<' ';
        cout<<endl;
        c.clear();
    }
    return 0;
}

