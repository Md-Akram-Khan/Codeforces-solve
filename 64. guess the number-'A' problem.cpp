#include<bits/stdc++.h>
using namespace std;
int main()
{
    int low=1,high=1000000;
    while(low!=high)
    {
        int mid=(low+high+1)/2;
        cout<<mid<<endl;
        //printf("%d\n",mid);
        //fflush(stdout);
        string a;
        cin>>a;
        if(a=="<")
            high=mid-1;
        else
            low=mid;
    }
    cout<<"! "<<high<<endl;
    //printf("!  %d\n",high);
    //fflush(stdout);
}

