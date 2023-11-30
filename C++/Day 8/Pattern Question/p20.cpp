/*
Star Pattern
   *
  **
 ***
****
*/

#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int row =1;
    while(row <=n){

        // space print
        int space = n - row;
        while(space){
            cout<<" ";
            space = space -1;
        }
        // star print
        int col =1;
        while(col<=row){
            cout << "*" << "";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}