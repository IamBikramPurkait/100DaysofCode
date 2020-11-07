/*      Day 13 : 7th November, 2020
        Author: Bikram Purkait
                                    */


// This is a Tail Recursion
// Print 1 to N using Recursion 
#include<bits/stdc++.h>
using namespace std;

void printN(int N)
{
    if(N==0)
        return; 
    else
        // cout<<N<<" ";
    
    printN(N-1);

    cout<<N<<" ";
}

int main()
{
    int n;
    cin>>n;
    printN(n);
    return 0;
}