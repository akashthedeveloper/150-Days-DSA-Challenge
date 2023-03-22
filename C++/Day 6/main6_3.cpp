// Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;

int main()
{
    // Declare variable to store user input
    int num;

    // Prompt the user to enter a 5-digit number
    cout << "Enter a 5-digit number: ";

    // Read the user input and store it in the variable
    cin >> num;

    // Calculate the first digit of the number
    int first_digit = num / 10000;

    // Calculate the second-last digit of the number
    int second_last_digit = (num / 10) % 10;

    // Calculate the sum of the first and second-to-last digits
    int sum = first_digit + second_last_digit;

    // Print out the sum of the first and second-to-last digits
    cout << "Sum of first and second last digits: " << sum << std::endl;

    // Return 0 to indicate successful completion of program
    return 0;
}
