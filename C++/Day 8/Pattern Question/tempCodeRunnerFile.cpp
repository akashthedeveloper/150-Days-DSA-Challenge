#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int space = n - row;

        // Print spaces
        while (space > 0) {
            cout << "  ";
            space = space - 1;
        }

        // Print numbers for the current row
        int count = 1;
        while (count <= row) {
            cout << count << " ";
            count = count + 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;

}