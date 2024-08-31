// This code is entirely copied from generated text in ChatGPT.
#include <iostream>
#include <vector>

using std::cout, std::endl;
using std::vector;

int fibonacci(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n]; // Return memoized result
    return memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
}

int main() {
    int n = 10; // Fibonacci number to find
    vector<int> memo(n + 1, -1);
    cout << "Fibonacci of " << n << " is " << fibonacci(n, memo) << endl;
    return 0;
}
