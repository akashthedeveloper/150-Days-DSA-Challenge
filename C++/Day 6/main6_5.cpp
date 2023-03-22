// Design a calculator to perform basic arithmetic operations (+,-,/,*,%)

#include <iostream>
using namespace std;

int main() {
   
    int num1, num2;

    cout << " Enter num1:" << endl;
    cin >> num1;

    cout << " Enter num2:" << endl;
    cin >> num2;

    cout << " Addition:" << num1 + num2 << endl;
    cout << " Subtraction:" << num1 - num2 << endl;
    cout << " Multiplication:" << num1 * num2 << endl;
    cout << " Divison:" << num1 / num2 << endl;
    cout << " Modulus:" << num1 % num2 << endl;
    return 0;
}