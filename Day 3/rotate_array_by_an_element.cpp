/*              
    Day 3 : 28 October 2020
    Author : Bikram Purkait    
Problem Link-https://www.hackerrank.com/challenges/array-left-rotation/problem

Q> C++ program to rotate an array by d elements 
Time complexity : O(n * d)
Auxiliary Space : O(1)

*/

#include <bits/stdc++.h>
using namespace std;

/*Function to left Rotate arr[] of 
size n by 1*/
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[i] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

/* Driver program to test above functions */
int main()
{   
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // Function calling
    leftRotate(arr, d, n);
    printArray(arr, n);
    return 0;
}
