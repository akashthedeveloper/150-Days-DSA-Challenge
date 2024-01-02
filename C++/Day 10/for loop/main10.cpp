/* Type Casting - Converting one data type to another is called type casting*/

/* Note: In type casting if bigger data type value is type casted then the chances of data loss is higher*/

#include <iostream>
using namespace std;
int main() {
    int a = 66 ;
    char c = 'b';
    // a = c; // ASCII value of b will be stored

    c = a;
  
    cout << c << endl;
    return 0;

}