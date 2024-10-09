// a>b  - print a
// else - print b

#include <iostream>
using namespace std;

int main()
{
 int a,b;
 cin>>a>>b;

 if (a>b){
    cout << "The value of a is:" << a << endl;
 }
 else{
    cout << "The value of b is:" << b << endl;
 }

 return 0;
}