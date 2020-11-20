#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        if(a[i]!=b[i])
            c++;
    }
    if(c==0)
    {
        sort(a,a+n);
        for(int i=0,j=n-1; i<n; i++,j--)
        {
            if(a[j]!=b[i])
            {
                d++;
                break;
            }
        }
        if(d==0)
            cout<<"maybe"<<endl;
        else
            cout<<"unrated"<<endl;
   }
   else
        cout<<"rated"<<endl;
        return 0;

}
