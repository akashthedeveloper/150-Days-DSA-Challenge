// Write a program to check if a number is prime

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=2;

    while(i<n){

        if(n%i==0){
            cout <<"Not prime for " << i <<endl;
        }  
        else{
            cout <<"Prime for " << i <<endl;
        }
        i++;
    }
return 0;
}