/*
A B C
D E F
G H I
*/

#include <iostream>
using namespace std;

int main() {
    int n = 3;  // number of rows and columns
    
    int row = 0;
    char start = 'A';
    
    while (row < n) {
        int col = 0;
        char ch = start;
        
        while (col < n) {
            cout << ch << " ";
            ch++;
            col++;
        }
        
        cout << endl;
        
        row++;
        start += n; // Its used to get into next row start = start + 3(n)
    }
    
    return 0;
}