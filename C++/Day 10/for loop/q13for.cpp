// Write a program to print and check if a no: is prime or not

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<2){
        cout<<n<<" is not a prime number";
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){ // n should not be divisible by i to be a prime number
                cout<<n<<" is not a prime number";
                return 0;
            }
        }
        cout<<n<<" is a prime number";
    }
    return 0;
}