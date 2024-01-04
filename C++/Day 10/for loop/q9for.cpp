// Write a program to print the power of number

#include <iostream>
using namespace std;
int main(){
    int n, power, num;
    cout<<"Enter the n:";
    cin>>n;
    cout<<"Enter the power:";
    cin>>power;

    num = n; // Initialize num with the value of n

    for(int i=1; i<power; i++){ // Loop starts from 1 and goes up to the power specified by the user
        num = num * n; // In each iteration, num is multiplied by n
    }
    cout<<num<<endl; // Print the result
    return 0;
}