# Day 18 : 12th November , 2020
# Author : Bikram Purkait

# Mean And Median of Array


# Python program to print
# median of elements

# list of elements to calculate median
n_num = [1, 2, 3, 4, 5]
n = len(n_num)
n_num.sort()

if n % 2 == 0:
    median1 = n_num[n//2]
    median2 = n_num[n//2 - 1]
    median = (median1 + median2)/2
else:
    median = n_num[n//2]
print("Median is: " + str(median))


# Python program to print
# mean of elements

# list of elements to calculate mean
n_num = [1, 2, 3, 4, 5]
n = len(n_num)

get_sum = sum(n_num)
mean = get_sum / n

print("Mean / Average is: " + str(mean))
