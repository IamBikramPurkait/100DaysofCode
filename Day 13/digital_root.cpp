/*      Day 13 : 7th November, 2020
        Author: Bikram Purkait
                                    */
// Digital Root
// DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.
// Input:
// n = 99999
// Output: 9
// Explanation: Sum of digits of 99999 is 45
// which is not a single digit number, hence
// sum of digit of 45 is 9 which is a single
// digit number.

#include <bits/stdc++.h>
using namespace std;
int sumDigits(int n)
{
    if (n < 10)
        return n;
    else
        return (n % 10) + sumDigits(n / 10);
}

int digitalRoot(int n)
{

    if (n < 10)
        return n;
    else
        return digitalRoot(sumDigits(n));
}

int main()
{
    int n;
    cin >> n;
    cout << digitalRoot(n);
    return 0;
}