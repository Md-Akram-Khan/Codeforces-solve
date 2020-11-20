#include<bits/stdc++.h>
//AJAIRA JINISH SHORO
#define nl                 "\n"
#define ll                 long long
#define pb                 push_back
#define pf                 push_front
#define np                 next_permutation
#define pp                 prev_permutation
#define sqr(x)             ((x)*(x))
#define pi                 acos(-1)
#define setprecision(x)    fixed<<setprecision((int)(x))
#define mem1(x)            memset(x,0,sizeof(x))
#define mem2(x)            memset(x,-1,sizeof(x))
#define all(x)             (x).begin(),(x).end()
#define sort1(x)           sort(all(x))
#define csort(x,c)         sort(all(x),c)
#define rsort(x)           sort(x.rbegin(),x.rend())
//AJAIRA JINISH SHESH
using namespace std;
void solve()
{
    string a;
    cin>>a;
    int hh,mm,hrev;
    hh=(a[0]-'0')*10+(a[1]-'0');
    mm=(a[3]-'0')*10+(a[4]-'0');
    hrev=(hh%10)*10+(hh/10);
    if(hh==23 && mm<hrev)
    {
        mm=32;
    }
    else if(hh==23 && mm>=hrev)
    {
        hh=0;
        mm=0;
    }
    else
    {
        if(mm<hrev)
            mm=hrev;
        else
        {
            hh++;
            hrev=(hh%10)*10+(hh/10);
            mm=hrev;
        }
    }
    if(hh==16 || hh==17 || hh==18 || hh==19)
    {
        hh=20;
        mm=02;
    }
    if(hh==6 || hh==7 || hh==8 || hh==9)
    {
        hh=10;
        mm=01;
    }
    a[0]=hh/10+'0';
    a[1]=hh%10+'0';
    a[3]=mm/10+'0';
    a[4]=mm%10+'0';
    cout<<a<<endl;
}
void solve1()
{
    int hh,mm;
    scanf("%d:%d",&hh,&mm);
    if((hh%10)*10+(hh/10)==mm)
        mm++;
    while((hh%10)*10+(hh/10)!=mm)
    {
        mm++;
        if(mm==60)
        {
            hh++;
            mm=0;
        }
        if(hh==24)
            hh=0;
    }
    printf("%02d:%02d\n",hh,mm);
}
void solve2()
{
    int hh,mm;
    scanf("%d:%d",&hh,&mm);
    do
    {
        mm++;
        if(mm==60)
        {
            hh++;
            mm=0;
        }
        if(hh==24)
            hh=0;
    }
    while((hh%10)*10+(hh/10)!=mm);
    printf("%02d:%02d\n",hh,mm);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--){solve();}
    solve1();
    return 0;
}

