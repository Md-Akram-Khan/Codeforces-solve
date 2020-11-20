#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int p;
    vector<int>b;
    for(int i=0; i<a.size(); i++)
    {
        if(i==0)
        {
            p=a[0]-'0';
            if(p>=5 && p!=9)
                b.push_back(9-p);
            else
                b.push_back(p);
        }
        else
        {
            p=a[i]-'0';
            if(p>=5)
                b.push_back(9-p);
            else
                b.push_back(p);
        }
    }
    for(int i=0; i<b.size(); i++)
        cout<<b[i];
        cout<<endl;

}

