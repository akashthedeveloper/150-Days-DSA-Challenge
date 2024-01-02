// Write a C++ program to print square of number from 1-5 using for loop

#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number ";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i<<" Square is: "<<i*i<<endl;
    }
    return 0;
}