#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b=0,i;
    scanf("%d\n",&n);
    char a[n+1];
    scanf("%s",&a);
    for(i=0; i<n-1; i++){
        if(a[i]==a[i+1])
            b++;
    }
    printf("%d",b);
    return 0;
}

