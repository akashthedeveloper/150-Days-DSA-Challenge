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
