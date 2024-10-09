// Write a C++ program to print the a-z: lowercase, A-Z: Uppercase and 0-9: number

#include <iostream>
using namespace std;

int main(){
    char ch;

    cout <<"Enter a character:";
    cin >> ch;

    if (ch>='a' && ch<='z'){
        cout << "Lowercase";
    }
    else if (ch>='A' && ch<='Z'){
        cout << "Uppercase";
    }
    else if (ch>='0' && ch<='9'){
        cout << "Number";
    }
    else{
        cout << "Invalid";
    }
return 0;
}