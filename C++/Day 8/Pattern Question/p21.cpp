/*
****
***
**
*
*/

#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    if (n == 1) {
        cout << "*";
    }
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n - row + 1) {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
