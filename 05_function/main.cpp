#include <iostream>

using cout, std::endl;
// Basic function definition:
// Declaration + Implementation
int add(int a, int b) {
    return a + b;
}

// Function prototype: Declaration-only
int subtract(int a, int b);

// Recursive Function
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int result_add = add(5, 3); // Function Call
    int result_subtract = subtract(5, 3); // Function Call
    cout << "Sum: " << result_add << endl;
    cout << "Subtract: " << result_subtract << endl;

    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}

// Function definition: Implementation
int subtract(int a, int b) {
    return a - b;
}
