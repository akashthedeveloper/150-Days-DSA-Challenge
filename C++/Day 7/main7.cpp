// Write a C++ program to print "add" if input value is odd otherwise print "even"

#include <iostream>

using namespace std;

int main() {
   
   int num;
   cin>>num;

   if (num%2== 0){
    cout<<"even" <<endl;
   }
   else{
    cout<<"odd" <<endl;
   }

   return 0;
}