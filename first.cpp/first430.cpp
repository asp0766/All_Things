// Number of Distinct Substrings in a String : -


#include <iostream>
using namespace std;

struct TrieNode {
    TrieNode* children[26];

    TrieNode() {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

class Trie {
public:
    TrieNode* root;
    int count; // number of nodes = number of distinct substrings + 1 (root)

    Trie() {
        root = new TrieNode();
        count = 1; // count root node
    }

    void insert(string s) {
        TrieNode* node = root;
        for (char ch : s) {
            int idx = ch - 'a';
            if (!node->children[idx]) {
                node->children[idx] = new TrieNode();
                count++;
            }
            node = node->children[idx];
        }
    }

    int countDistinctSubstrings(string s) {
        for (int i = 0; i < s.size(); i++) {
            insert(s.substr(i));
        }
        return count - 1; // exclude root node
    }
};

int main() {
    Trie trie;
    string s = "ababa";
    cout << trie.countDistinctSubstrings(s) << endl; // Output: 10
    return 0;
}
