//Write a Hello World Program in C++

/*
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    return 0;
}
*/

// Write a C++ program to take input from users

/*
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";

    cin >> age;

    cout << "You are  " << age << " yrs old" << endl;

    return 0;
}
*/

// Write a C++ program to print the size of different data types
/*
#include <iostream>
using namespace std;

int main()

{
    int a;
    float b;
    char c;
    double d;
    string e;
    bool f;

    cout << "size of int is " << sizeof(a) <<endl;
    cout << "size of float is " << sizeof(b) <<endl;
    cout << "size of char is " << sizeof(c) <<endl;
    cout << "size of double is " << sizeof(d) <<endl;
    cout << "size of string is " << sizeof(e) <<endl;
    cout << "size of bool is " << sizeof(f) <<endl;

return 0;
}

a+=1 : a = a+1
a-=1 : a = a-1
a*=2 : a= a*2
a/=2 : a = a/2
*/

/*
#include <iostream>
using namespace std;

int main(){
    string name;

    cout << "Enter your name:" << endl;

    cin >> name;

    cout << "Nice to meet you, " << name << endl;

    return 0;
}

*/

/*
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World\n";
    return 0;
}
*/



// Write a program to take the input from the user
/*
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout <<  "Enter your age\n";
    cin >> num;

    cout << " Your age is " << num ;

    return 0;
}
*/

// Write a C++ program to print output using Bitwise Operator: num1= 5(0101) & num2 = 8(1000)
/*
#include <iostream>
using namespace std;
int main(){
    int num1 = 5;
    int num2 = 8;

    cout << (num1 <<1) << endl; // Left Shift Operator
    cout << (num1 >>2) << endl; // Right Shift Operator

    cout << (num1 & num2) << endl;
    cout << (num1 | num2) << endl;
    cout << (num1 ^ num2) << endl;
    cout << (~num1) << endl;

    return 0;
}
*/

// Write a C++ program to calculate the sum of first and second last digit of a 5-digit number

// number: 12345, first num =1, second last digit = 4
/*
#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter a 5-digit number: ";
    cin >> number;
    
    // Extracting the first and second last digits
    int firstDigit = (number / 10000) % 10;
    int secondLastDigit = (number / 10) % 10;
    
    // Calculating the sum
    int sum = firstDigit + secondLastDigit;
    
    cout << "The sum of the first and second last digits is: " << sum << endl;
    
    return 0;
}
*/

// Write a program to print the output of sum of 3 digit number

#include <iostream>
int main() {
    int number;
    std::cout << "Enter a three-digit number: ";
    std::cin >> number;

    // Check if the number is a three-digit number
    if (number < 100 || number > 999) {
        std::cout << "Please enter a valid three-digit number." << std::endl;
        return 0;
    }

    // Extract digits and calculate the sum
    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    int sum = digit1 + digit2 + digit3;

    std::cout << "Sum of the digits: " << sum << std::endl;

    return 0;
}


