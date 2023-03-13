// Print two numbers by swapping the value of each other

#include <iostream>
using namespace std;

int main(){
   
   int a, b;
   cout << "a:" << endl;
   cin >> a;
   cout << "b" << endl;
   cin >>b;

   int c;
   c = b;
   b = a;
   a = c;
   cout << "a:" << a << endl;
   cout << "b:" << b << endl;
   
   return 0;
}