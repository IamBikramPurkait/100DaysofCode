''' Day 2 : 27 October 2020
    Author : Bikram Purkait '''

''' The separator between the arguments to print() function in Python is space by 
default (softspace feature) , which can be modified and can be made to any character,
integer or string as per our choice. The ‘sep’ parameter is used to achieve the same, 
it is found only in python 3.x or later. It is also used for formatting the output strings. '''


#Function using 'end' and 'sep' parameters to print desired output
# string1 = "Geeks"
# string2 = "For"
# Output will be - Geeks$For$Geeks$

def print_func(string1, string2):
    print ( string1,string2,string1, sep = '$', end = '$')
# Use string1 & string2 with sep and end parameter to print desired output

#{ 
#Driver Code Starts
def main():
    string1 = "Geeks"
    string2 = "For"
    print_func(string1, string2)
    print()


if __name__ == "__main__":
    main()
#} Driver Code Ends