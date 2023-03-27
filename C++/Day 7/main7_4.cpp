// Write a C++ program to check if given number is even and divisible by 3

#include <iostream>
using namespace std;

int main() {
    
   int num;
   cin>>num;

   if (num%2==0 && num%3==0){
       cout<<"even and divisible by 3" <<endl; 
   }
   else{
       cout<<"odd" <<endl;
   }

    return 0;
}