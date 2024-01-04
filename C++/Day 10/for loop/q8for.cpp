// Write a program to print a table of 6

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // for(int i=1; i<=10; i++){
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    // }

    // OR another method 

    // for(int i=6; i<=60; i=i+6){
    //     cout << i <<endl;
    // }

    // OR another method

    for(int i=n; i<=10*n; i=i+n){
        cout<<i<<endl;
    }

    return 0;
}