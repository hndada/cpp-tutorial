#include <iostream>
#include <string>

using std::cout, std::endl;
using std::string;

// Class's basic features: Constructor, member functions, private members
// Class's additional features: destructor, base/derived class, static members, ...
// Struct: class with public members by default. Used for data-only classes.
class Employee {
private:
    string name;
    double salary;

public:
    // Constructor
    Employee(const string& n, double s) : name(n), salary(s) {}

    // Member functions
    void display() const {
        cout << "Name: " << name << ", Salary: $" << salary << endl;
    }

    void setSalary(double s) {
        salary = s;
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
    // Create an instance of Employee using the constructor
    Employee emp1("John", 50000.00);

    // Call the member function
    emp1.display();

    // Modify the salary
    emp1.setSalary(55000.00);
    cout << "Updated Salary: $" << emp1.getSalary() << endl;

    return 0;
}
