#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    for(i=1; i<1000; i++)
    {
        if((a*i)%10==0 || (a*i)%10==b)
            break;
    }
    printf("%d\n",i);
}
