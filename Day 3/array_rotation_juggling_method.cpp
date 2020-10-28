/*              
    Day 3 : 28 October 2020
    Author : Bikram Purkait    
Problem Link-https://www.hackerrank.com/challenges/array-left-rotation/problem                  
Q> Juggling algorithm for array rotation

Time Complexity : O(n)
Space Complexity : O(1)


*/

#include <iostream>

using namespace std;

//Fuction for calculate gcd of a and b
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

//Function for array rotate by Juggling Method
void ArrayRotate(int A[], int n, int k)
{
    int d = -1, i, temp, j;
    for (i = 0; i < gcd(n, k); i++)
    {
        j = i;
        temp = A[i];
        while (1)
        {
            d = (j + k) % n;
            if (d == i)
                break;
            A[j] = A[d];
            j = d;
        }
        A[j] = temp;
    }
}

//Function for display the array
void displayArray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "\n";
}

//Driver Code
int main()
{
    int n, i, k;
    cin >> n >> k;
    int A[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    ArrayRotate(A, n, k);
    displayArray(A, n);
    return 0;
}