// Write a C++ program to print the days in a week when given a number 1-7

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n==1){
        cout << "Monday"<<endl;
    }
    else if(n==2){
        cout << "Tuesday"<<endl;
    }
    else if(n==3){
        cout << "Wednesday"<<endl;
    }
    else if(n==4){
        cout << "Thursday"<<endl;
    }
    else if(n==5){
        cout << "Friday"<<endl;
    }
    else if(n==6){
        cout << "Saturday"<<endl;
    }
    else if(n==7){
        cout << "Sunday"<<endl;
    }
    return 0;
}