/*
      1
    2 3
  4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1, value =1;
    

    while (row <= n) {
        int space = n - row;

        // Print spaces till it becomes zero
        while (space > 0) {
            cout << "  ";
            space = space - 1;
        }

        // Print numbers for the current row
        int count = 1;
        while (count <= row) {
            cout << value << " ";
            // value++ is responsible for updating the value of the variable that is printed
            //count++ ensures that the loop doesn't continue indefinitely and stops when it has printed the correct number of elements for the current row.
            value++;
            count++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
