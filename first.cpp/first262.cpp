// List in STL : -


#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a list of integers
    list<int> l;

    // Insert elements at the end
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    // Insert elements at the front
    l.push_front(5);

    // Print the list
    cout << "List after push_back and push_front:" << endl;
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // Remove elements from the front
    l.pop_front();  // Removes 5

    // Remove elements from the back
    l.pop_back();   // Removes 30

    // Print the list
    cout << "List after pop_front and pop_back:" << endl;
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // Find an element in the list
    auto it = find(l.begin(), l.end(), 20);
    if (it != l.end()) {
        cout << "Found element: " << *it << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    // Insert an element at a specific position
    it = l.begin();
    advance(it, 1); // Move iterator to the 2nd element
    l.insert(it, 15); // Insert 15 at the 2nd position

    // Print the updated list
    cout << "List after insert:" << endl;
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // Remove a specific element
    l.remove(15);  // Removes all occurrences of 15

    // Print the final list
    cout << "List after remove:" << endl;
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
