// Longest Word With All Prefixes : -


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct TrieNode {
    TrieNode* children[26];
    bool isEnd;

    TrieNode() {
        isEnd = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int idx = ch - 'a';
            if (!node->children[idx])
                node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isEnd = true;
    }

    bool allPrefixesExist(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int idx = ch - 'a';
            node = node->children[idx];
            if (!node || !node->isEnd)
                return false;
        }
        return true;
    }
};

string longestWordWithAllPrefixes(vector<string>& words) {
    Trie trie;
    for (string word : words)
        trie.insert(word);

    string best = "";
    for (string word : words) {
        if (trie.allPrefixesExist(word)) {
            if (word.length() > best.length() ||
               (word.length() == best.length() && word < best)) {
                best = word;
            }
        }
    }
    return best;
}

int main() {
    vector<string> words = {"a", "ap", "app", "appl", "apple", "apply"};
    cout << longestWordWithAllPrefixes(words) << endl; // Output: "apple"
    return 0;
}
