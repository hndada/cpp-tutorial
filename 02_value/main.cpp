#include <iostream>
#include <string>

using std::cout, std::endl;
// using namespace std;

// Integer, Floating-point, Boolean, Character
int main() {
    // 1. Integer values
    int a = 10;
    long long b = 10000000000LL;
    cout << "Integer: " << a << "\n";
    cout << "Long Long: " << b << "\n";

    // 2. Floating-point values
    float c = 5.5f;
    double d = 10.123456789;
    cout << "Float: " << c << "\n";
    cout << "Double: " << d << "\n";

    // Float value will be implitly converted to double.
    double sum = c + d;
    double subtract = c - d;
    double product = c * d;
    double division = c / d;

    cout << "Sum: " << sum << endl;
    cout << "Subtract: " << subtract << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << division << endl;

    // 3. Boolean values
    bool ok = true;
    bool no = false;

    bool result_and = ok && no;
    bool result_or = ok || no;
    bool result_not = !ok;
    
    cout << "AND: " << result_and << endl;
    cout << "OR: " << result_or << endl;
    cout << "NOT: " << result_not << endl;

    // 4. Character values
    char e = 'A';
    cout << "Character: " << e << "\n";

    return 0;
}
