# List - It is a collection of different values like strings, number , or boolean values

from turtle import pos


companies = ["Tesla" , "Google" , "Microsoft" , "Apple" , "Netflix"]

print(companies)

# To access any element in the list we use indexing
print(companies[0])
print(companies[2])
print(companies[-1]) # from backward position the indexing starts with -1
print(companies[1:]) # To print 1 or more than that value we use this method where : is of continuation sign
print(companies[-1:])
print(companies[:-1])

print(companies[1:4]) # Here 1st index elementis is considered and 4th index element is not considered

# Changing the value in the list of companies
companies[0] = "Meta"
print(companies[0])

# Different functions in array or list
interview_rounds = [5, 4, 6 , 3 , 7]
companies = ["Tesla" , "Google" , "Microsoft" , "Apple" , "Netflix"]
print(companies.index("Netflix"))
# extend() function it extends the list to a new set of list by adding other list values
companies.extend(interview_rounds)

# append() function will always add the item at the end of the list
companies.append("Amazon")

# insert() function will take up 2 values first one is index value and other one the value you want to assign
companies.insert(2 , "Oracle")

# remove() function will remove the value from the list which you want to removed
companies.remove("Netflix")

# clear() function helps to remove all the values in the given list
companies.clear()

# pop() function helps to remove last value in the list
interview_rounds.pop(-1)


# count() function is used to count number of times a function ispresent in a list
print(companies.count("Netflix"))

# sort() function it is used to arrange the list in ascending order i.e alphabetic order
companies.sort()
print(companies)

# reverse() function it is used to return the list
companies.reverse()
print(companies)

# copy() function it is used to copy the same list
companies2 = companies.copy()
print(companies2)

# Tuples - It is similar to list but it is also having some differences from the list like tuples are 
# immutable means once you create the tuple it can't be changed or modified so once it is created 
# it is done.

coordinates = (4,6)  # This is tuple syntax
print(coordinates[1]) # Here 1 is the index value

# coordinates[1] = 14 will give the erroe since tuples value cannot be changed once its is define

# Functions

def say_hii(name , age): # defining the function
    print("Hello " + name + ", you are " + age)
say_hii("Akash" , "21") # calling the function
say_hii("Harsh" , "22")

 # say_hii is a function
 # name & age are called parameters
 # value assigned to name and age i.e Akash , Harsh, 21, 22 are called argument

# Return function: It is used to get return the information back from the function
def cube(num):
    return num*num*num
value = cube(5)
print(value)

# if-else statement with logical operators like and, or, not
is_male = True 
is_healthy = False

if is_male or is_healthy: # OR is logical operator
    print("You are male or healthy ")
elif is_male and not(is_healthy): # elif statement
     print("You are male and healthy")
elif not(is_male) and is_healthy:
    print("You are neither male nor healthy")
else:
    print("you are female")


# other examples of elif statement: Write program to print max value
def max_num(num1 ,num2 , num3):
    if num1 >= num2 and num1 >= num3:
       return num1
    elif num2 >= num1 and num2 >= num3:
       return num2
    else:
       return num3
print(max_num(7,9,11))