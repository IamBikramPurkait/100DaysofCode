/* Day 2 : 27 October 2020
    Author : Bikram Purkait */

// Reverse the number in C++ 

#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder,tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        while(n != 0) 
        {
            remainder = n%10;
            reversedNumber = reversedNumber*10 + remainder;
            n /= 10;
        }
        cout << reversedNumber;
    }
    return 0;
}