//Write a Hello World Program in C++

/*
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    return 0;
}
*/

// Write a C++ program to take input from users

/*
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";

    cin >> age;

    cout << "You are  " << age << " yrs old" << endl;

    return 0;
}
*/

// Write a C++ program to print the size of different data types

#include <iostream>
using namespace std;

int main()

{
    int a;
    float b;
    char c;
    double d;
    string e;
    bool f;

    cout << "size of int is " << sizeof(a) <<endl;
    cout << "size of float is " << sizeof(b) <<endl;
    cout << "size of char is " << sizeof(c) <<endl;
    cout << "size of double is " << sizeof(d) <<endl;
    cout << "size of string is " << sizeof(e) <<endl;
    cout << "size of bool is " << sizeof(f) <<endl;

return 0;
}