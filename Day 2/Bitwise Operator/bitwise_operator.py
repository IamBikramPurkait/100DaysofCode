''' Day 2 : 27 October 2020
    Author : Bikram Purkait '''

' Bitwise operators are useful when we want to work with bits. '
# Here, we'll take a look at them.
# Given three positive integers a, b and c. Your task is to perform some bitwise operations on them as given below:
# 1. d = a ^ a
# 2. e = c ^ b
# 3. f = a & b
# 4. g = c | (a ^ a)
# 5. e = ~e
# Note: ^ is for xor.

# create a bitwise function to perform a bitwise task
# pass 3 argument for 3 input numbers   
def bitwise(a,b,c):      
    print(a ^ a)        # ' ^ ' => xor operator
    print(c ^ b)        # ' ^ ' => xor operator
    print(a & b)        # ' & ' => and operator
    print(c | (a ^ a))  # ' | ' => or operator
    print(~(c ^ b))     # ' ~ ' => not operator

# Driver Code
if __name__ == "__main__":
    test_case=int(input())      # input no of test case
    for i in range(test_case):
        # take 3 input by map methods in single line by split() method
        a,b,c=map(int,input().split()) 
        bitwise(a,b,c)          # bitwise function calling