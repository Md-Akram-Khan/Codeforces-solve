#include<bits/stdc++.h>

#define ll long long
#define pf push_front
#define popb pop_back
#define popf pop_front
#define np next_permutation
#define pp prev_permutation
#define fill(x,y) memset((x),y,sizeof(x))
#define rep(x,y,z) for(int x=y; x<z; x++)
#define rep1(x,y,z) for(int x=y; x>=z; x--)
#define all(x) (x).begin(),(x).end()

using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    int n=a.size()/2;
    for(int i=n; i<a.size(); i++)
    {
        cout<<a[i];
        if(i!=a.size()-1)
            cout<<"+";
    }
    cout<<endl;
    return 0;
}

