// Write a C++ program to print if student is pass or fail with the help of ternery operator(condition? Expression 1: Expression 2)

#include <iostream>

using namespace std;

int main(){
    
    int marks;

    cin>>marks;
    
    // Here ternery operator is used which says condition ? expression 1: expression 2
    marks>35 ? cout<<"Pass"<<endl : cout<<"Fail"<<endl; 

    return 0;
}