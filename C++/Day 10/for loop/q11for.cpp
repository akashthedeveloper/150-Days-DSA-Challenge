// Sum of square of n natural number

#include <iostream>
using namespace std;

int main(){
     int n;
     cin>>n;

     int sum = (n*(n+1)*(2*n+1))/6;

     cout<<sum;

     return 0;
}