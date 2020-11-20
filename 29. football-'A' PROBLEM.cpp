#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    string a[t];
    for(i=0; i<t; i++)cin >> a[i];
    sort(a,a+t);
    for(i=0; i<t; i++)cout << a[i] <<" ";
    //cout << a[t/2];
}
