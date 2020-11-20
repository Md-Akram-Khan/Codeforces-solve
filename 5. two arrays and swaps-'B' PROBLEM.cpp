    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t; cin>>t;
        while(t--)
        {
            int n,k,i,j,sum=0; cin>>n>>k;
            int a[n],b[n],c[n];
            for(i=0; i<n; i++)
                    cin>>a[i];
            for(i=0; i<n; i++)
                    cin>>b[i];
            sort(a,a+n);
            sort(b,b+n);
            for(i=0,j=n-1; i<n; i++,j--)
                c[i]=b[j];
            for(i=0; i<k; i++)
            {
                if(a[i]<c[i])
                  swap(a[i],c[i]);
                else
                    break;
            }
            for(i=0; i<n; i++)
                sum+=a[i];
            cout<<sum<<endl;
        }
        return 0;
    }
