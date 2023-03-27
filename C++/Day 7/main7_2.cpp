// Write a C++ program to check if students are fail , pass, just pass. - Used of Nested if -else statement

#include <iostream>
using namespace std;

int main() {
    
    int marks;
    cin>>marks;

    if (marks >=35){
        if(35<=marks<50){
            cout<<"Just Pass" << endl;
        }
        else{
            cout<<"Passed with good grades" << endl;
        }
    }
    else{
        cout<<"Failed" << endl;
    }

    return 0;
}