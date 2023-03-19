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
    
    return 0;
}
    
