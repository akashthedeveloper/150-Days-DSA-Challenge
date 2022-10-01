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

