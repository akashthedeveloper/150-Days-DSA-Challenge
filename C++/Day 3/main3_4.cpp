// Write a program to print the size of different data types

#include <iostream>
using namespace std;

int main() {

    int a;
    float b;
    char c;
    double d;
    long e;

    cout << "Size of int: " << sizeof(a) << endl;
    cout << "Size of float: " << sizeof(b) << endl;
    cout << "Size of char: " << sizeof(c) << endl;
    cout << "Size of double: " << sizeof(d) << endl;
    cout << "Size of long: " << sizeof(e) << endl;
    
    return 0;
}