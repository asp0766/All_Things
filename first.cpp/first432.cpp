// Maximum XOR of Two Numbers In an Array using Trie : -



#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct TrieNode {
    TrieNode* children[2];  // Two children for 0 and 1 bits
    TrieNode() {
        children[0] = children[1] = nullptr;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    // Insert a number into the Trie (in binary form)
    void insert(int num) {
        TrieNode* node = root;
        for (int i = 31; i >= 0; i--) { // 32-bit integer
            int bit = (num >> i) & 1;
            if (!node->children[bit]) {
                node->children[bit] = new TrieNode();
            }
            node = node->children[bit];
        }
    }

    // Find the maximum XOR of a given number with numbers in the Trie
    int findMaxXOR(int num) {
        TrieNode* node = root;
        int maxXor = 0;

        for (int i = 31; i >= 0; i--) { // 32-bit integer
            int bit = (num >> i) & 1;
            int oppositeBit = 1 - bit; // opposite bit

            // Check if the opposite bit is available to maximize XOR
            if (node->children[oppositeBit]) {
                maxXor |= (1 << i); // Set the i-th bit of the maxXor
                node = node->children[oppositeBit];
            } else {
                node = node->children[bit];
            }
        }

        return maxXor;
    }
};

int findMaximumXOR(vector<int>& nums) {
    Trie trie;
    int result = 0;

    // Insert all numbers into the Trie
    for (int num : nums) {
        trie.insert(num);
    }

    // Find the maximum XOR of each number with numbers in the Trie
    for (int num : nums) {
        result = max(result, trie.findMaxXOR(num));
    }

    return result;
}

int main() {
    vector<int> nums = {3, 10, 5, 25, 2, 8};
    cout << "Maximum XOR of two numbers in the array: " << findMaximumXOR(nums) << endl;
    return 0;
}
