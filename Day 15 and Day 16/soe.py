# Day 15 and 16 : 9th and 10th November , 2020
# Author : Bikram Purkait

# Python program to print all primes smaller than or equal to
# n using Sieve of Eratosthenes in Python

def SieveOfEratosthenes(n):

    # Create a boolean array "prime[0..n]" and initialize
    #  all entries it as true. A value in prime[i] will
    # finally be false if i is Not a prime, else true.
    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):

        # If prime[p] is not changed, then it is a prime
        if (prime[p] == True):

            # Update all multiples of p
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1

    # Print all prime numbers
    for p in range(2, n+1):
        if prime[p]:
            print (p),


# driver program
if __name__ == '__main__':
    n =int(input('Enter the number : '))
    print("Following are the prime numbers smaller than or equal to")
    SieveOfEratosthenes(n)
