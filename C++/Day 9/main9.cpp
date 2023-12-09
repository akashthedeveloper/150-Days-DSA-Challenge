// Bitwise Operator of AND(&), OR(|), NOT(~) and XOR(^)

#include <iostream>
using namespace std;
int main(){

    int a = 4, b  = 6;
    cout << "Bitwise AND: "<< (a & b) << endl;
    cout << "Bitwise OR: "<< (a | b) << endl;
    cout << "Bitwise NOT: "<< (~a) << endl;
    cout << "Bitwise XOR: "<< (a ^ b) << endl;

// Bitwise Operator - Left Shift(<<) & Right Shift(>>)

// The left shift operator ( << ) shifts the bits of a number to the left. It multiplies the original value by 2 raised to the power of the shift amount. 

// The right shift operator ( >> ) shifts the bits of a number to the right. It divides the original value by 2 raised to the power of the shift amount.

    cout <<  (17>>2) << endl;
    cout <<  (19<<1) << endl;
    cout <<  (21<<2) << endl;

    int i = 7;

    cout << (++i) << endl; // value = 8, i -8
    cout << (i++) << endl; // Now i=8 - value =8, i =9
    cout << (i--) << endl; // Now i=9 - value =9, i =8
    cout << (--i) << endl; // Now i=8 - value =7, i =7

    return 0;
}