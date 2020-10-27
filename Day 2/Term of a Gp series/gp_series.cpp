/*  Day 2 : 27 October 2020
    Author : Bikram Purkait  */

// find the term of a G.P series

// formula is : Tn= (a*(r^(n-1)))

/*  if we take input a = 2 , r = 2 , n = 3 
then output is 8
series is : 2, 4, 8, 16, 32, ...  */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
	cin >> tc;
	while(tc--)
    {
		int a, r, n;
		cin >> a >> r >> n;
		long long sum=a*(pow(r,n-1));
		cout << sum <<"\n";
    }
    return 0;
}