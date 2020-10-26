# #100DaysofCode
# Day 1 26/10/2020
# Author : Bikram Purkait
# pattern problems using python




# 1)Write a program to print the following pattern(50 Stars).
# * * * * * * * * * *
# * * * * * * * * * *
# * * * * * * * * * *
# * * * * * * * * * *
# * * * * * * * * * *

n=int(input())
for i in range(n):
    print("* " * n)           #print stars


# 2) Write a program to print the following star pattern.
# *
# * *
# * * *
# * * * *
# * * * * *

n=int(input())
for i in range(n):
    print("* " * (i+1))       #print stars

# 3)
#         *
#       * *
#     * * *
#   * * * *
# * * * * *

n=int(input())
for i in range(n):
    print(end="  " * (n-1))   #print spaces
    print("* " * (i+1))       #print stars
    n-=1                      #decrease value of n by 1 for print spaces

# 4)
# * * * * * *
# * * * * *
# * * * *
# * * *
# * *
# *

n=int(input())
for i in reversed(range(n)):
    print("* " * (i+1))       #print stars


# 5)
# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5

n=int(input())
for i in range(n):            #for loop for print row 0 - (n-1) 
    for j in range(1,i+2):    #for loop for print coloumn 1 - (i+1)
        print(j,end=" ")      #print column number
    print(" ")                #print new line after succesful of 1 coloumn for loop

# 6)
# 1
# 2 2
# 3 3 3
# 4 4 4 4
# 5 5 5 5 5

n=int(input())
for i in range(1,n+1):        #for loop for print row 1 - n 
    for j in range(i):        #for loop for print coloumn 0 - (i-1)
        print(i,end=" ")      #print row number
    print(" ")                #print new line after succesful of 1 coloumn for loop


# 7)
#         1
#       1 2
#     1 2 3
#   1 2 3 4
# 1 2 3 4 5

n=int(input())
for i in range(1,n+1):                  #for loop for print row 1 - n
    for j in range(1,n-i+1,-1):         #reversed for loop for spaces 1 - (n-i) 
        print(end="  ")                 #print for spaces 
    for j in range(1,i+1):              #for loop for print row number 1 - i
        print(j,end=" ")                #print row number
    print("")                           #print new line after succesful of 1 coloumn for loop