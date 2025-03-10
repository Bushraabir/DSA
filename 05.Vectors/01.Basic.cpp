// Vectors in C++ are dynamic arrays provided by the Standard Template Library (STL).
// They can change size automatically and support various operations such as insertion,
// deletion, and iteration. This example demonstrates basic vector usage including creation,
// adding elements, iterating, and modifying the vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> vec;

    // Add elements to the vector using push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    // For each loop to prinjt the vector
    cout << "Vector elements: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    // Display the size of the vector
    cout << "Size of vector: " << vec.size() << endl;

    // Remove the last element using pop_back
    vec.pop_back();

    // Display vector elements after removal
    cout << "Vector after pop_back: ";

    // for each loop to prinjt the vector
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
