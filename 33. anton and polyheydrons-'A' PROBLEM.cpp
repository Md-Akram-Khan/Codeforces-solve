#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum = 0;
    cin>>n;
    string a;
    while(n--)
    {
        cin>>a;
        if(a=="Tetrahedron")
            sum += 4;
        else if(a=="Cube")
            sum += 6;
        else if(a=="Octahedron")
            sum += 8;
        else if(a=="Dodecahedron")
            sum += 12;
        else
            sum += 20;
    }
    cout<<sum<<endl;
    return 0;
}

