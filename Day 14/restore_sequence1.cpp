
#include <iostream>
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;

int main()
{
    IOS
    ll t;
    cin>>t;
    while(t--){
        ll number;
        cin>>number;
        ll first[number],second[number];
        for(ll i=0;i<number;i++){
            cin>>second[i];
        }
        for(ll i=0;i<number;i++){
            first[i]=1;
        }
        ll adder = 1000000;
        for(ll i=0;i<number;i++){
            if(first[i]==1)
                first[i]=adder;
            if(second[i]-1!=i)
                first[second[i]-1]=(adder)*(first[second[i]-1]);
            adder--;
        }
        for(ll i=0;i<number;i++){
            cout<<first[i]<<" ";
        cout<<endl;
        }

    }


    
    return 0;
}