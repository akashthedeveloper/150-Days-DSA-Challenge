/*
D 
C D
B C D
A B C D
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i; // First character of each row
        while(j<=i){
            cout<<ch<<" ";
            ch++; // Increment in the value of each row.
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}