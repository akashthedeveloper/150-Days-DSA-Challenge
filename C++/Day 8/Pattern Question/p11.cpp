/*
A A A
B B B
C C C 
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int row =1;
    while(row <= n){

        int col =1;
        while(col <= n){

            char ch = 'A' + row - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row++;
    }
    return 0;
}