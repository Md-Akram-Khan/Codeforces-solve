#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,s=0,d=0,j;
    scanf("%d",&a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d",&x[i]);
    }
    sort(x,x+a);
        for(i=0; i<a; i++){
        printf("%d ",x[i]);
    }

    for(j=a-1; j>0; j=j-2){
        s += x[j];
        d += x[j-1];
    }
    printf("\n%d %d\n",s,d);
}

