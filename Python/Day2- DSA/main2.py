#Boolean Expression either have values True or False i.e (0 or 1)

#Relational Operators - It is the operator through which the Boolean Expression value of True or False is defined

 # 1) Equality Operator (==)
4 == 2*2 # It gives value True

 # 2) Not Equal (!=)
3 ** 3 != 81 # It gives False value

 # 3) Less than (<)
3 < 4

 # 4) Greater than (>)
3 > 4

 # 5) Greater than or equal to (>=)
5 >= 4

 # 6) Less than or equal to (<=)
5 <= 4

#Identation - Here 4 spaces or whitespace is provided in Python

# If-Statement

#This is multiple line comments in Python
"""
Syntax
  if test expression:
    statement

(In if statement if the given statement is true then it is executed otherwise it is ignored. )
"""  

# eg: of if statement
if 5<6:
    print("Yes,5 is les than 6")

# if-else statement
"""
Syntax
  if condition:
    statement 1
  else:
    statement 2
""" 

# eg of if-else statement

if 6 > 7:
    print("6 is greatee than 7")
else:
    print("6 is less than 7")

#Guessing-game program

favourite_food = "Biryani"
name = input("What's your favourite food?")

if favourite_food == "Biryani":
    print("Yep! so amazing")
else:
    print("Yuck! that's not it")

print("Thanks for playing")

# Functions - It is reusable block of code which are used to perform certain task

"""
Syntax: def function():
            statement

        function()

eg: def func_name():
          print("Hello my name is Akash")

    func_name()
"""
# Parameter - It is variable listed inside the paranthesis of the function name

# Argument - It is value that is sent to the function when the function is called.

#Example of functions with Paramaters and Argument

def wash_car(amount_paid): # Here amaount_paid is paramter
    if(amount_paid == 12):
        print("Wash with tri-color foam")
        print("Rinse twice")
        print("Dry with large blow dryer")
    if(amount_paid == 6):
        print("Wash with white foam")
        print("Rinse once")
        print("Air dry")

wash_car(12) #Here 6 is the argument which is the value of the parameter

# Return function in python - It is statement which consist of return keyword and the value that function should return

"""
Syntax- return my_value
"""
#example of using return function

def withdraw_amount(current_balance, amount):
    if(current_balance >= amount):
        current_balance =current_balance - amount
        return current_balance

    balance = withdraw_amount(180, 80)
    
    if (balance <= 50):
        print("You need to deposit amount in your account")
    else:
        print("Everything is fine")

# Prints the favourite cities
def favourite_city(name):
    print(" One of my favourite city is" , name)

favourite_city("Mumbai")
favourite_city("Bangalore")
favourite_city("Himachal Pradesh")

