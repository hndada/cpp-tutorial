#include <iostream>
#include <vector>
#include <algorithm>

using std::cout, std::endl;
using std::vector;

int main() {
    cout << endl;
    // Find the first position where 4 could be inserted
    numbers = {1, 2, 3, 3, 4, 4, 4, 5, 7};
    cout << "Numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;


    // lower_bound and upper_bound are used to find the first position 
    // where a number could be inserted to maintain the sorted order of the range
    // Beware: The range must be sorted before using lower_bound and upper_bound
    auto it = std::lower_bound(numbers.begin(), numbers.end(), 4);
    if (it != numbers.end()) {
        cout << "Lower bound of 4: " << *it << endl;
    } else {
        cout << "4 not found in the range." << endl;
    }

    // Find the first position where 4 could be inserted so that all elements before it are <= 4
    it = std::upper_bound(numbers.begin(), numbers.end(), 4);

    if (it != numbers.end()) {
        cout << "Upper bound of 4: " << *it << endl;
    } else {
        cout << "No elements greater than 4 found." << endl;
    }

    return 0;
}
