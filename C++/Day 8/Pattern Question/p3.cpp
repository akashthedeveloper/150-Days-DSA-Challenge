#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i= 1;

    while(i <=n){
        int j =1;
        while(j<=n){
            cout<<j; // Since j is there in column it need to be printed that
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }    
return 0;
}