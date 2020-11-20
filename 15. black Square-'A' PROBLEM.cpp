#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4,i,sum=0;
    scanf("%d%d%d%d",&x1,&x2,&x3,&x4);

    char string[100001];
    scanf("%s",&string);

    for(i=0; i<strlen(string);i++){
        if(string[i]=='1')
            sum += x1;
        else if(string[i]=='2')
            sum += x2;
        else if(string[i]=='3')
            sum += x3;
        else if(string[i]=='4')
            sum += x4;
    }
    printf("%d\n",sum);
}
