// Fibonacci Series

// Series: 0, 1, 1, 2, 3, 5, 8,13, 21, 34
// number: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int findNthFibonacci(int n) {
    // Base cases for the first two Fibonacci numbers
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    // Variables to store the two previous Fibonacci numbers
    int fib1 = 0, fib2 = 1;

    // Loop to calculate the nth Fibonacci number
    for (int i = 2; i <= n; ++i) {
        // Calculate the current Fibonacci number by adding the previous two
        int currentFib = fib1 + fib2;

        // Update the previous two Fibonacci numbers for the next iteration
        fib1 = fib2;
        fib2 = currentFib;
    }

    // Return the nth Fibonacci number
    return fib2;
}

int main() {
    // Input: Enter the value of n to find the nth Fibonacci number
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Call the function to find the nth Fibonacci number
    int result = findNthFibonacci(n);

    // Output: Display the result
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}