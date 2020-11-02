// Day 7 and Day 8: 31st October and 1st September 2020
// Author: Bikram Purkait

// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

// No-1281. Subtract the Product and Sum of Digits of an Integer

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, suma = 0,sump=1, m;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0)
    {
        m = n % 10;
        suma = suma + m;
        sump = sump * m;
        n = n / 10;
    }
    cout <<sump-suma<< endl;
return 0;
}