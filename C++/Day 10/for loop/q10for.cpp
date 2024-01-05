// Sum of n natural number

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum+=i; // sum = sum + i
    // }
    // cout<<"Sum is : "<<sum;
    
    // OR another method

    int sum = (n*(n+1))/2;

    cout<<"Sum is : "<<sum;
    
    return 0;
}  
