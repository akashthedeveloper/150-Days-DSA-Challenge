// Write a C++ program to print if age > 18 as adult and if not teenager

#include <iostream>
using namespace std;
int main(){
    int age;
    cin>>age;

    if (age > 18){
        cout << "adult";
    }
    else{
        cout << "teenager";
    }
    return 0;
}