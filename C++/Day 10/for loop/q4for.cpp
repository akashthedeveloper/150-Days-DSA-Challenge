// Write a program for printing odd number

#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number:" <<endl;
    cin>>n;

    for(int i=1; i<=n; i=i+2){
        if(i%2 != 0){
            cout << i << endl;
        }        
    }
    return 0;
}