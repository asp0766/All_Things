// First Non-Repeating Character In A Stream : -


#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

void firstNonRepeating(string str) {
    queue<char> q;
    unordered_map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;  // Increase frequency
        q.push(ch);  // Push to queue

        // Remove repeating characters from the front
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }

        // Print first non-repeating character or -1 if none
        cout << (q.empty() ? '-1' : q.front()) << " ";
    }
}

int main() {
    string stream = "aabc";
    cout << "First non-repeating characters: ";
    firstNonRepeating(stream);
    return 0;
}
