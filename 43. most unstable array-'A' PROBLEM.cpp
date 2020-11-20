    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t; cin>>t;
        while(t--)
        {
            int n,m;
            cin>>n>>m;
            if(n==1)
                cout<<"0"<<endl;
            if(n==2)
                cout<<m<<endl;
            if(n>2)
                cout<<2*m<<endl;
        }
        return 0;
    }
