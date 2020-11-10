# Day 15 and 16 : 9th and 10th November , 2020
# Author : Bikram Purkait

# Basics of strings in python

# 1> string traversal using indexing
str="Welcome to the Python!"
for i in str:
    print(i)

# 3> 
str1='Bikram '
str2='Purkait'
print("String Concatening = ",str1+str2)
print("string repeating = ",str1*3)
str1+=str2
print("string appending =  ",str1)

# 2>
str="Welcome to the Python!"
for i in range(len(str)):
    print(str[i])

# 4>
str="Welcome to the Python!"
print(str[0:4])
print(str[:])
print(str[::-1])
print(str[:4])
print(str[0:])
print(str[-1])
print(str[len(str)-1])

# 5>
str1='Bikram '
print("Str1 id is before appending = ",id(str1))
str2='Purkait'
str1+=str2
print("Str1 id is after appending = ",id(str1))


# 6>
for i in range(1,10):
    for j in range(1,10):
        print(i**j)
    print("")