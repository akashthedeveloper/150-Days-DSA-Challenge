/*
A B C
B C D
C D E
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    char ch = 'A';
    int row = 1;

    while (row <= n) {
        int col = 1;
        while (col <= n) {
            cout << char( ch + col - 1) << " ";
            col++;
        }
        cout << endl;
        ch++;
        row++;
    }
    return 0;
}