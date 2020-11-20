#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[101];
    int sum=0,i,n,m;
    scanf("%s",&x);
    sum = x[0]-'a';
    if(sum<0)
        sum = abs(sum);
    if(sum>13)
        sum = 26-sum;
    for(i=0; i<(strlen(x)-1); i++)
    {
        n=x[i+1]-x[i];
        if(n<0)
            n=abs(n);
        if(n>13)
            n =26-n;

            sum+=n;
    }
    printf("%d ",sum);

}
