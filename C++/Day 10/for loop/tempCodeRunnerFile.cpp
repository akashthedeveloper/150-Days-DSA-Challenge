#include <iostream>
using namespace std;
int main(){
    int n, power, num;
    cout<<"Enter the n:";
    cin>>n;
    cout<<"Enter the power:";
    cin>>power;

    num = n; // Same number to be multiplied

    for(int i=1; i<power; i=i++){
        num = num * n;
    }
    cout<<num<<endl;
    return 0;
}