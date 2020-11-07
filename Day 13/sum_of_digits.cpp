/*      Day 13 : 7th November, 2020
        Author: Bikram Purkait
                                    */
// Sum of Digits of a Number


#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n)
{
    //Your code here
    if(n<10)
        return n;
    return (n%10) + sumOfDigits(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<sumOfDigits(n);
    return 0;
}