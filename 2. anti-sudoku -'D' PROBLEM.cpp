#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x=9,k=0;
        while(x--)
        {
            if(k==9)
                k=1;
            if(k==10)
                k=2;
            string a;
            cin>>a;
            if(a[k]=='9')
                a[k]='1';
            else
                a[k]=a[k]+1;
            cout<<a<<endl;
            a.erase(0,8);
            k+=3;
        }
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x=9;
        while(x--)
        {
            string a;
            cin>>a;
            for(int i=0; i<9; i++)
                if(a[i]=='1')
                    a[i]='2';
            cout<<a<<endl;
        }
    }
    return 0;
}
*/
