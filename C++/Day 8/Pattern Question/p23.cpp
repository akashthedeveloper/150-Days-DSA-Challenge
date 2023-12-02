/*
1 1 1 1
  2 2 2
    3 3
      4
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){

      // Print space

      int space =1;
      while(space<=row-1){
        cout<<"  ";
        space = space + 1;
      }
      // Print value 
      int value =1;
      while(value<=n-row+1){
        cout<<row<<" ";
        value = value + 1;
      }
      cout<<endl;
      row = row + 1;
      }
    return 0;
    }
