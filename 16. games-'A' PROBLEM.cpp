#include<stdio.h>
int main()
{
    int a,i,j,x[31],y[31],sum=0;
    scanf("%d",&a);
    for(i=0; i<a; i++){
        scanf("%d%d",&x[i],&y[i]);
    }
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            if(x[i]==y[j])
                sum++;
        }
    }
    printf("%d\n",sum);
}
