// Write a program to print the power of number

#include <iostream>
using namespace std;
int main(){
    int n, power, number;
    cin>>n>>power;

    number = n;

    for(int i=1; i<power; i=i++){
         number = number * n;
    }
    cout<<number<<endl;
    return 0;
}