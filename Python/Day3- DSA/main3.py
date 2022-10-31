# Draw the triangle shape 

print("    /| ")
print("   / |")
print("  /  |")
print(" /___|")

# defining Variables and its values

character_name = "Sam"
character_age = "35"
print("There once was a man named " + character_name + ",")
print("he was " + character_age + "yrs old.")

character_name = "Tom"
print("He really liked the name " + character_name)
print("but didn't like being " + character_age)

# For printing any strings or numbers into new line we use \n (backslash n) or \"
print("Akash the Developer")
print("Akash \nthe Developer")

community = "Akash the Developer"
print(community)

# Cancatenation is adding one varible with another string 
print(community + " is the best tech community")

# Converting uppercase letters to lowercase or vice versa with the help of functions
print(community.lower())

print(community.upper())

# Checking any sentence if it is uppercase or lowercase by function
"""
.isupper()

.islower()
"""
print(community.upper().isupper())
print(community.lower().islower())
print(community.lower().isupper())

# Length funtion: It is used to know the number of characters there in any string
# syntax: len()

print(len(community))

# To take out any character from string we use index value with [] and index value starts from 0 ton n

print(community[0])
print(community[6])

# Index function - It is function in which if any whole number value or paramtere is given then its returns the character of that string
print(community.index("D"))
print(community.index("Akash"))

# Replace function - It is the function where an character is been replaced by other character
print(community.replace("Akash the" , "Learn"))

# Converting integer into strings we use 
# syntax: str()

my_num = 10
print(str(my_num))
print(str(my_num) + " is my favourite number")
"""
print( 10 + " is my favourite number") - This will give error since 10 is an integer which needs to be 
converted to string first with the help of str() function
"""

# abs function - The python abs() function is used to return absolute value of a number
my_number = -43
print(abs(my_number))

my_number1 = -14.5
print(abs(my_number1))

# The pow() function returns the value of x to the power of y (x^y).
print(pow(2, 3))

# max() and min() function is used to find out which integer value is bigger and which is smaller
print(max(5, 50))

print(min(5, 50))

# round() function is used to make the decimal values and round off to closest integer
print(round(9.4))

print(round(9.8))

# To use any function we had to import several functions in python

from math import *

# floor() it is the function where in decimal numbers the point & after number is removed 
# and remaining number will be printed
print(floor(9.7))

print(floor(11.2))

# ceil() it is the function where in decimal number the point & after number is rounded 
# off to a greater number
print(ceil(-59.95))

print(ceil(301.30))

print(ceil(301.75))