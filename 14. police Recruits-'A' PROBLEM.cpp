#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,i,c;
    scanf("%d",&a);
    for(i=0; i<a; i++){
        scanf("%d",&b);
        sum += b;
        if(sum<0){
            c++;
            sum = 0;
        }
    }
    printf("%d",c);
    return 0;
}
