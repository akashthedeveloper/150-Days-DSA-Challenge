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