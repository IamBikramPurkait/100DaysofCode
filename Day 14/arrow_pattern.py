# Day 14 : 08th November , 2020
# Author : Bikram Purkait

# Print Arrow Pattern

#         *
#       * *
#     * * *
#   * * * *
# * * * * *
#   * * * *
#     * * *
#       * *
#         *

n=int(input())      # taking user input
lines=2*n           # calculate lines
for i in range(1,lines):
    if i<=n:        # Upper part of the pattern
        for j in range(n-i):        # print space
            print(end="  ")
        for j in range(1,i+1):      # print star
            print("*",end=" ")
        print("")                   # print new line
    else:           # lower part of the pattern
        for k in range(1,i-n+1):    # print space
            print(end="  ")     
        for k in range(1,2*n-i+1):  # print star
            print("*",end=" ")      
        print("")                   # print new line
    lines-=1
