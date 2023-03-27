// Write a C++ program to divide 3 age groups depending upon their age a) age < 12 = Child b) 12>age >18 = Teenager c) age <18 = Adult

#include <iostream>
using namespace std;

int main() {
    
    int age ;
    cin>>age;

    if (age <12) {
        cout<<"You are Child" << endl;
    }
    else if (12>age >18) {
        cout<<"You are Teenager" << endl;
    }
    else {
        cout<<"You are Adult" << endl;
    }

    return 0;
}