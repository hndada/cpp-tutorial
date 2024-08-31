#include <iostream>

using std::cout, std::endl;

int main() {
    // if-else block
    if (2 > 3) {
        cout << "2 is greater than 3" << endl;
    } else if (2 == 3) {
        cout << "2 is equal to 3" << endl;
    } else {
        cout << "2 is less than 3" << endl;
    }
    cout << endl;
    
    // One-line if statement
    if (number % 2 == 0) cout << "Even";  
    else cout << "Odd";

    // '?': ternary operator
    cout << "5 is even? " << (5 % 2 == 0 ? "Yes" : "No") << endl;
    cout << endl;

    // Switch statement
    int n = 2;
    switch (n) {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
        case 4:
            cout << "three or four" << endl;
            break;
        default:
            cout << "over" << endl;
            break;
    }
    cout << endl;

    return 0;
}
