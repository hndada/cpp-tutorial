#include <iostream>

using std::cout, std::endl;

int main() {
    // Basic for loop
    for (int j = 5; j < 8; ++j) { // j = j + 1
        cout << j << endl;
    }
    cout << endl;

    // No need for braces if the body is a single line
    for (int i = 1; i <= 5; ++i) cout << i << " ";  
    cout << endl;

    // Continue statement
    for (int n = 0; n < 7; ++n) {
        if (n < 3) {
            continue;
        }
        cout << n << endl;
    }
    cout << endl;

    // Infinite loop
    for (;;) { 
        cout << "loop" << endl;
        break;
    }
    cout << endl;

    return 0;
}
