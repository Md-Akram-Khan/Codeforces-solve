#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        deque<int>candy;
        for(int i=0; i<n; i++)
        {
            int a;cin>>a;
            candy.push_back(a);
        }
        int move=0,a_prev=0,b_prev=0,alice=0,bob=0;
        while(candy.size()>0)
        {
            if(move%2==0)
            {
                a_prev=0;
                while(a_prev<=b_prev && candy.size()>0)
                {
                    a_prev += candy.front();
                    alice += candy.front();
                    candy.pop_front();
                }
            }
            else
            {
                b_prev=0;
                while(b_prev<=a_prev && candy.size()>0)
                {
                    b_prev += candy.back();
                    bob += candy.back();
                    candy.pop_back();
                }
            }
            move++;
        }
        cout<<move<<" "<<alice<<" "<<bob<<endl;
    }
    return 0;
}
