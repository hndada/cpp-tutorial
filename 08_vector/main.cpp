#include <iostream>
#include <vector>

using std::cout, std::endl;
using std::vector;

// https://blockdmask.tistory.com/70
int main() {
    // Initializing vectors
    vector<int> empty_vector; // Empty vector
    vector<int> spaced_vector(5); // Vector with 5 elements
    vector<int> inited_vector(5, 10); // Vector with 5 elements, all initialized to 10
    vector<int> copied_vector(inited_vector); // Copy of inited_vector
    vector<int> numbers = {2, 4, 6, 8, 10}; // Vector with 5 elements

    cout << "First element: " << numbers.front() << endl;
    cout << "Second element: " << numbers.at(1) << endl;
    cout << "Third element: " << numbers[2] << endl;
    cout << "Last element: " << numbers.back() << endl;
    cout << endl;
    
    cout << "Index-based for loop" << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }
    cout << endl;

    // begin() and end() return iterators.
    // cbegin() and cend() return const iterators.
    cout << "Iterator-based for loop" << endl;
    // auto: type inference
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Range-based for loop" << endl;
    for (auto num : numbers) { 
        cout << num << " ";
    }
    cout << endl;

    numbers.push_back(6); // Add 6 to the end
    numbers.pop_back(); // Remove the last element

    // Sorting in ascending order
    std::sort(numbers.begin(), numbers.end());
    
    // Sorting in descending order
    // std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    cout << "Sorted numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
