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
    for(int i=0; i<a.size(); i++)
    {
        char ch=a[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='y' && ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U' && ch!='Y')
        {
            printf(".%c",tolower(ch));
        }
    }
    cout<<endl;
    return 0;
}
