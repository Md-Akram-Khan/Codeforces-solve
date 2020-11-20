#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b=1,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++){
        if(a[i]!=a[i+1])
            b++;
    }
    printf("%d",b);
    return 0;
}
