// Fibonacci Series

// Series: 0, 1, 1, 2, 3, 5, 8,13, 21, 34
// number: 1, 2, 3, 4, 5, 6 ,7 ,8, 9, 10


#include<iostream>
using namespace std;

// Function to find the nth fibonacci number using dynamic programming
int fibonacci(int n)
{
    int f[n + 2]; 
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

int main()
{
    int n;

    cout << "Enter the nth place: ";
    cin >> n;

    if(n < 0)
    {
        cout << "Incorrect input" << endl;
    }
    else
    {
        cout << "Fibonacci number of " << n << "th place: " << fibonacci(n) << endl;
    }

    return 0;
}