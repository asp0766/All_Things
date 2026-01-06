// erase() in Trie : -


#include <iostream>
using namespace std;

const int ALPHABET_SIZE = 26;

struct TrieNode {
    TrieNode* children[ALPHABET_SIZE];
    int wordCount;     // count of words ending here
    int prefixCount;   // count of prefixes through this node

    TrieNode() {
        wordCount = 0;
        prefixCount = 0;
        for (int i = 0; i < ALPHABET_SIZE; i++)
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
            node->prefixCount++;
        }
        node->wordCount++;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int idx = ch - 'a';
            if (!node->children[idx])
                return false;
            node = node->children[idx];
        }
        return node->wordCount > 0;
    }

    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            int idx = ch - 'a';
            if (!node->children[idx])
                return false;
            node = node->children[idx];
        }
        return true;
    }

    int countWordsEqualTo(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int idx = ch - 'a';
            if (!node->children[idx])
                return 0;
            node = node->children[idx];
        }
        return node->wordCount;
    }

    int countWordsStartingWith(string prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            int idx = ch - 'a';
            if (!node->children[idx])
                return 0;
            node = node->children[idx];
        }
        return node->prefixCount;
    }

    void erase(string word) {
        if (!search(word)) return;

        TrieNode* node = root;
        for (char ch : word) {
            int idx = ch - 'a';
            TrieNode* next = node->children[idx];
            next->prefixCount--;
            node = next;
        }
        node->wordCount--;
    }
};

int main() {
    Trie trie;
    trie.insert("apple");
    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");

    cout << trie.search("apple") << endl;              // 1
    cout << trie.countWordsEqualTo("apple") << endl;   // 2
    trie.erase("apple");
    cout << trie.countWordsEqualTo("apple") << endl;   // 1
    trie.erase("apple");
    cout << trie.search("apple") << endl;              // 0
    cout << trie.countWordsStartingWith("app") << endl; // 1
    cout << trie.search("bat") << endl;                // 1

    return 0;
}
