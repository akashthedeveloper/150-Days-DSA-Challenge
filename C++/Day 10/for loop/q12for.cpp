// Write a program to print a factorial of number

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact =1; // for big number use data type "double"
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout << "\nFactorial of "<< n <<" is : "<<
    fact;
    return 0;

}