#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    char ch;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>ch;
            if(ch=='C' || ch=='M' || ch=='Y')
                c++;
        }
    }
    if(c==0)
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;
    return 0;
}

