#include <iostream>

using std::cout, std::endl;

int main() {
    int a = 10;
    int* ptr = &a; // Pointer to 'a'
    int& ref = a;  // Reference to 'a'

    cout << "a = " << a << 
    ", *ptr = " << *ptr << 
    ", ref = " << ref << endl;

    *ptr = 20;
    cout << "After modifying *ptr, a = " << a << endl;

    ref = 30;
    cout << "After modifying ref, a = " << a << endl;

    return 0;
}
