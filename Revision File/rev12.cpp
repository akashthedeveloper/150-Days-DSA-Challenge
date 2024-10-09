// Write a program to print a sum of all even number from 1-n

// #include <iostream>
// using namespace std;

// int main(){

//     int n, sum=0;
//     cin>>n;

//     int i=1;

//     while(i<=n){
//         if(i%2==0)
//         {
//             sum=sum+i;
//         }
//         i=i+1;
//     }
//     cout<<sum;

//     return 0;
// }




#include <iostream>
using namespace std;
int main(){
   int n, sum=0;
   cin>>n;
   
   int i=1;

   while(i<=n){
    if(i%2==0){
        sum =sum + i;
    }
    i=i+1;
   }
   cout<<sum;

   return 0;
}