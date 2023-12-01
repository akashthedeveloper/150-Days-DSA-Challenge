// Bitwise Operator of AND, OR, NOT and XOR

#include <iostream>
using namespace std;
int main(){

    int a = 4, b  = 6;
    cout << "Bitwise AND: "<< (a & b) << endl;
    cout << "Bitwise OR: "<< (a | b) << endl;
    cout << "Bitwise NOT: "<< (~a) << endl;
    cout << "Bitwise XOR: "<< (a ^ b) << endl;
    
    return 0;
}