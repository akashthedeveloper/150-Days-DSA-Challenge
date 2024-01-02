// Write a C++ program to print even number from 1-10 using for loop

#include <iostream>
using namespace std;
int main(){
    for(int i=2; i<=10; i=i+2){
        if(i%2==0){
            cout << i << endl;
        }
            
    }
    return 0;
}