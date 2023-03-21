// Write a C++ program to print output by using Bitwise Operator
#include <iostream>
using namespace std;

int main() {
    
    int num1 =5; // 0101
    cout << (num1<<1) << endl; // 0101<<1 - 1010
    cout << (num1>>1) << endl; // 0101>>1 - 1010

    int num2 =8; //1000
    cout << (num1&num2) << endl;
    cout << (num1|num2) << endl;
    cout << (num1^num2) << endl;
    cout << (~num1) << endl;

    return 0;
}