// Write a program to print the value of two numbers by using arithmetic and,relational operator

#include <iostream>
using namespace std;

int main() {
    int num1=12, num2 = 8;
    
    // Relational Operators
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;

    //Arithmetic Operators 
    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 / num2 << endl;
    cout << ++num1 << endl; // Here the ++ operator is used before the operand to increase the value from 1
    cout << --num2 << endl; // Here -- operator is used before the operand to decrease the value from 1

    // Logical Operator

    cout << (num1 > num2 && num1 < num2) << endl;
    cout << (num1 > num2 || num1 < num2) << endl;
    cout << !(num1 > num2) << endl;
    cout << !(num1 < num2) << endl;
    cout << !(num1 == num2) << endl;
    cout << !(num1 != num2) << endl;
    cout << !(num1 > num2 && num1 < num2) << endl;
    cout << !(num1 > num2 || num1 < num2) << endl;

    // Assignment operators

    num1 += 1;
    cout << num1 << endl;

    num2 -= 2;
    cout << num2 << endl;
    
    num1 /= 2;
    cout << num2 << endl;

    num2 %= 2;
    cout << num2 << endl;

    // Bitwise Operator

    cout << (num1 & num2) << endl; // Bitwise AND
    cout << (num1 | num2) << endl; // Bitwise OR
    cout << (num1 ^ num2) << endl; // Bitwise EX OR
    cout << (~num1) << endl;       // Bitwise Complement
    cout << (num1<<1) << endl;     // Left Shift
    cout << (num1>>1) << endl;     // Right Shift

    // Miscellaneous Operator

    cout << sizeof(num1) << endl; // sizeof operator
    

    bool flag;
    num1==num2?flag=true:flag=false; // ternary operator
    cout << flag << endl;
    
    cout << (&num1) << endl; // address operatpr
    
    int a= 6;
    cout << (a++) << endl; // post -increment operator -6
    cout << (++a) << endl; // pre -increment operator -7
    cout << (a--) << endl; // post -decrement operator -6
    cout << (--a) << endl; // post -decrement operator 5

    return 0;
}
    
