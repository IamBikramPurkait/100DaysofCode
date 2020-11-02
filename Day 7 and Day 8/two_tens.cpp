// Day 7 and Day 8: 31st October and 1st September 2020
// Author: Bikram Purkait

// https://www.codechef.com/problems/TWOVSTEN
// Two vs Ten 


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n%10==0)
        cout<<0<<endl;
        else if(n%5==0)
        cout<<1<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}   