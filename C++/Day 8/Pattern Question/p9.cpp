/*
1
2 3
3 4 5
5 6 7

*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        int col = 1;
        int value = row;
        while(col <= row){
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}

// Another method to print this pattern without using variable of value

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int row = 1;

    while (row <= n) {
        int col = 1;

        while (col <= row) {
            cout << col + row - 1 << " ";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}


