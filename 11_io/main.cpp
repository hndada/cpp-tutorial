#include <iostream>
#include <string>

using std::cout, std::endl;
using std::cin, std::string;

// cin, cin.ignore(), getline(cin, str)
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    string str;
    cout << "Enter a string: ";
    cin.ignore(); // Ignore leftover newline from previous input
    getline(cin, str);

    cout << "You entered integer: " << num << endl;
    cout << "You entered string: " << str << endl;

    return 0;
}
