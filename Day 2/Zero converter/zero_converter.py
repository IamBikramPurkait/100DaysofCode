''' Day 2 : 27 October 2020
    Author : Bikram Purkait '''

# Zero Converter - Python 
''' You are given a number n. The number n can be negative or positive. 
If n is negative, print numbers from n to 0 by adding 1 to n. If positive, 
print numbers from n-1 to 0 by subtracting 1 from n. '''

def pos(n): #function for printing the series of positive numbers
    print("Positive series is: ")
    for i in range(n-1,-1,-1):
        print(i,end=" ")
        
def neg(n): #function for printing the series of negetive numbers
    print("Negetive series is: ")
    for i in range(n,1):
        print(i,end=" ")

#{ 
#Driver Code Starts.


def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        numbah=int(input())
        if(numbah>0):
            pos(numbah)
        elif(numbah<0):
            neg(numbah)
        else:
            print("already Zero",end="")
        print()
        testcases-=1
        
if __name__=='__main__':
    main()
#} Driver Code Ends