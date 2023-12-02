// Bitwise Operator - Left Shift(<<) & Right Shift(>>)

// The left shift operator ( << ) shifts the bits of a number to the left. It multiplies the original value by 2 raised to the power of the shift amount. 

// The right shift operator ( >> ) shifts the bits of a number to the right. It divides the original value by 2 raised to the power of the shift amount.

#include <iostream>
using namespace std;

int main(){

    cout <<  (17>>1) << endl;
    cout <<  (17>>2) << endl;
    cout <<  (19<<1) << endl;
    cout <<  (21<<2) << endl;
    
    return 0;   
}