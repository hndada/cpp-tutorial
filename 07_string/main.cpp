#include <iostream>
#include <string>

// endl: insert newline("\n") and flush the output buffer
using std::cout, std::endl;
using std::string;

int main() {
    // Array is a sequence of elements.
    // String is a sequence of characters.
    // Array and String are similar in many ways.
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    cout << endl;

    string str = "Hello";
    cout << "str: " << str << endl;

    // Accessing Characters
    char firstChar = str[0]; 
    cout << "First character of str: " << firstChar << endl;

    // Comparison; parentheses are essential!
    cout << (str == "Hello") << endl;

    // Concatenation
    str += " World!";
    cout << "Concatenated String: " << str << endl;

    return 0;
}
