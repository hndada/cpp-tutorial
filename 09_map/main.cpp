#include <iostream>
#include <map>
#include <string>

using std::cout, std::endl;
using std::map;
using std::string;

// CRUD: Create, Read, Update, Delete
// Initialize, access and find, insert, erase
// Set: a map with value only
int main() {
    // Initializing maps
    map<string, int> empty_map; // Empty map
    map<string, int> inited_map = {{"apple", 3}, {"banana", 5}, {"cherry", 7}}; // Map with initial values
    map<string, int> copied_map(inited_map); // Copy of inited_map

    // Display initial map contents
    cout << "Initial map elements:" << endl;
    // Avoid copying the elements by using const reference
    // Pair is a tuple-like object with two members: first and second
    for (const auto& pair : inited_map) {
        // const auto& pair: use 'pair.first' instead of '->'
        // const auto pair: use 'pair->first' instead of '.'
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    cout << endl;


    // Accessing elements
    cout << "Value for key 'apple': " << inited_map["apple"] << endl;
    cout << "Value for key 'banana': " << inited_map.at("banana") << endl;
    cout << endl;

    // This would throw an out_of_range exception:
    // cout << "Value for key 'orange': " << inited_map.at("orange") << endl; 

    // count(key) returns 1 if key exists, 0 otherwise
    if (inited_map.count("banana")) {
        cout << "Key 'banana' exists." << endl;
    } else {
        cout << "Key 'banana' does not exist." << endl;
    }
    cout << endl;


    // Find an element
    auto it = inited_map.find("cherry"); // Find element with key 'cherry'
    if (it != inited_map.end()) {
        cout << "Found key 'cherry', Value: " << it->second << endl;
    } else {
        cout << "Key 'cherry' not found." << endl;
    }
    cout << endl;

    // Insert a new element
    inited_map["orange"] = 10; // Insert or update key 'orange'
    cout << "After inserting key 'orange':" << endl;
    for (const auto& pair : inited_map) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    cout << endl;

    // Erase an element
    inited_map.erase("banana"); // Erase element with key 'banana'
    cout << "After erasing key 'banana':" << endl;
    for (const auto& pair : inited_map) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    cout << endl;

    return 0;
}
