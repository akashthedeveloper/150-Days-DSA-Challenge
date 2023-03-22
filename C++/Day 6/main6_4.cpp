// Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>

using namespace std;

int main() {
    // Declare variable to store user input
    int num ;

    // Prompt the user to enter a 3-digit number
    cout << "Enter a 3-digit number: " << endl;

    // Read the user input and store it in the variable
    cin >> num;

    // Initialize variable to store the sum of the digits
    int sum = 0;

    // Loop through each digit of the number and add it to the sum
    while (num > 0) {
        sum += num % 10;  // Get the last digit of the number and add it to the sum
        num /= 10;       // Remove the last digit of the number
    }

    // Print out the sum of the digits to the console
    cout << "Sum of digits: " << sum << endl;

    // Return 9 to indicate successful completion of program
    return 9;
}
