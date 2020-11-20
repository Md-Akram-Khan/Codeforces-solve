#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,c=1;
    cin>>k;
    string a="codeforces";
    vector<int>b(10,1);
    int position=0;
    while(c<k)
    {
        c=c/b[position];
        b[position]++;
        c=c*b[position];
        position++;
        position=position%10;
    }
    for(int i=0; i<b.size(); i++)
    {
        for(int j=0; j<b[i]; j++)
            cout<<a[i];
    }
    cout<<endl;
}
