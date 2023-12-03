/*
1 2 3 4
  2 3 4
    3 4
      4
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int space = 1;

        // Print spaces for the current row
        while (space <= row - 1) {
            cout << "  ";
            space++;
        }

        // Initialize a variable 'col' with the value of the current row number. 
        // This is done to start printing numbers from the current row.

        int col = row;


        // Print numbers for the current row
        while (col <= n) {
            cout << col << " ";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
