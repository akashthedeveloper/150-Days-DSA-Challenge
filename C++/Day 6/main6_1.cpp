// Write a program to take the values of two variables a and b from the keyboard and then check if two of the conditions 'a < 50' and 'a < b' are true.

#include <iostream>
using namespace std;

int main() {
    
    int a,b;

    cin >> a;

    cin >> b;

    if (a<50){
        cout << "a is less than 50" << endl;
    }

    else {
       cout << "a is greater than 50" << endl;
    }

    if (a<b){
        cout << "a is less than b" << endl;
    }

    return 0;
}