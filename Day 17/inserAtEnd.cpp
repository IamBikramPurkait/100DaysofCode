// Day 17 : 11th November , 2020
// Author : Bikram Purkait

//User function Template for C++


// You only need to insert the given element at 
// the end, i.e., at index sizeOfArray - 1. You may 
// assume that the array already has sizeOfArray - 1
// elements. 


// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

void insertAtEnd(int arr[],int sizeOfArray,int index,int element);

 // } Driver Code Ends






void insertAtEnd(int arr[], int sizeOfArray, int index, int element)
{
    arr[sizeOfArray-1] = element;
}


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;//Input testcases
    while(t--)
    {
        
        int sizeOfArray; 
        
        //input size of Array
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        
        //input elements in the Array
        for(int i=0;i<sizeOfArray-1;i++)
        cin>>arr[i];
        
        int index;
        //input index
        cin>>index;
        int element;
        //input element
        cin>>element;
        
        //calling insertAtIndex() function
        insertAtEnd(arr,sizeOfArray,index,element); //Complete this function
        
        for(int i=0;i<sizeOfArray;i++)//Printing the array for verification
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
    
	return 0;
}  // } Driver Code Ends