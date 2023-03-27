# C++ is an object oriented programming languages

## C++ Program - Hello World

```cpp
#include <iostream>   
    int main() {
           std::cout << "Hello, World!\n" ;
           return 0;
       }
```

## Taking the Input

```cpp
   #include <iostream>
   #include <string>
   using namespace std;

   int main()
   {
    string str;
    cout<<"Enter your name:";
    cin>> str;
    cout<<"Nice to meet you," << str <<"!" <<endl;

    return 0;
   }
```

### Explain ASCII values in C++

ASCII values in C++ refer to the way computers understand and store letters, numbers, and other characters. Each letter, number, and character is assigned a unique number called an ASCII code. For example, the letter "A" has an ASCII code of 65, while the number "7" has an ASCII code of 55.

These codes are used by computers to represent and process these characters in programs and files. So, when we type a letter or number on a computer keyboard, it is actually represented and stored as an ASCII code in the computer's memory.

In summary, ASCII values in C++ are a way for computers to understand and process letters, numbers, and characters by assigning them unique numbers.

The ASCII value of the lowercase alphabet is from 97 to 122. And, the ASCII value of the uppercase alphabet is from 65 to 90.

Here is the [refrence](https://en.cppreference.com/w/cpp/language/ascii) to it.

## sizeof operator

It is the operator to determine the size of different variables and data types in bytes eg: int, char, float,etc.

```
syntax: sizeof(datatype)
```

### Precendence and Associativity in C++

In C++, operator precedence is a set of rules that determine the order of operations when an expression contains multiple operators. It specifies which operators are evaluated first and which are evaluated later.

For example, in the expression "a + b *c", the multiplication operation will be evaluated first because it has a higher precedence than addition. So, the expression will be equivalent to "a + (b* c)".

Operator associativity, on the other hand, specifies the order in which operators are evaluated when they have the same precedence. Operators can be either left-associative, meaning they are evaluated from left to right, or right-associative, meaning they are evaluated from right to left.

### Conditionals in C++

  1) if statement: It is used to print the statement if it is true otherwise it ignores the statement

``` C++
Syntax: if (condition) {
           statement
        }
```

  2) if-else statement: It is used to print if statement if it is true otherwise else is executed

``` C++
Syntax:  if (condition) {
            statement 1
        }
        else {
            statement 2
        }
```

  3) if-else if statement: The if-else if statement is a type of control flow statement that allows you to execute different blocks of code based on different conditions. It works similarly to the if-else statement, but with multiple conditions.

 ``` C++
  Syntax: if(condition 1) {
             statement 1
          }
          else if (condition 2) {
             statement 2
          }
          else {
             statement 3
          }
 ```
  4) Nested if-else statement
   
``` C++
   Syntax: 
   if(condition 1) {
      if (condition 2) {
         statement 1
      } 
      else {
         statement 2
      }
   }
   else {
      statement 3
   }
```
### Common Misconception between a) Bitwise AND(&) vs Logical AND(&&) , b) Bitwise OR(|) vs Logical OR(||)

In programming, bitwise and logical operators are used to manipulate the bits of variables or values. The key difference between bitwise and logical operators is that bitwise operators work on individual bits, while logical operators work on the truth value of expressions.

Here's a table to summarize the main differences between bitwise and logical operators in C++:

|Operator| Function | Example |
|:------:|:--------:|:-------:|
|Bitwise AND (&) |Compares each bit of two values and returns a value where each bit is set to 1 only if the corresponding bits of both values are 1 | x = 5 & 3; evaluates to 1 (0101 & 0011 = 0001) |
|Logical AND (&&)|Returns true if both operands are true |if (x > 0 && x < 10)|
|Bitwise OR|Compares each bit of two values and returns a value where each bit is set to 1 if any of the corresponding bits of either value are 1|(x = 5 Bitwise OR 3); evaluates to 7 (0101 Bitwise OR 0011 = 0111)|
|Logical OR |Returns true if either operand is true |	if (x == 'a' Logical OR x == 'b') |
|Bitwise NOT (~)|Inverts the bits of a value, so each 0 becomes 1 and each 1 becomes 0|x = ~5; evaluates to -6 (~0101 = 1010 in two's complement representation; the most significant bit indicates a negative value)|
|Logical NOT (!)| NOT (!)	Inverts the truth value of an expression|	if (!condition)|


  1) switch statement: 

  2) for loop

  3) while loop

  4) do while loop

  5)  break statement

  6)  continue statement

  7)  goto statement

  8)  return statement

  9)  throw statement
