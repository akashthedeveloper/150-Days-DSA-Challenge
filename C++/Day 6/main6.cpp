// Write a C++ program to check whether 2 numbers entered by user are equal or not

#include <iostream>
using namespace std;

int main(){
    
    int num1, num2;

    cout<<"Enter num1:" << endl;
    cin>>num1;

    cout<<"Enter num2:" << endl;
    cin>>num2;

    if (num1==num2) {
        cout << "The numbers are equal" << endl;
    }

    else {
        cout << "The numbers are not equal" << endl;
    }

    return 0;
}