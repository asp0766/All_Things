// countWordsEqualTo() & countWordsStartingWith() in Trie in Trie : -


#include <iostream>
#include <unordered_map>
using namespace std;

const int ALPHABET_SIZE = 26;

struct TrieNode {
    TrieNode* children[ALPHABET_SIZE];
    int wordCount;      // Number of times this word ends here
    int prefixCount;    // Number of words that pass through this node

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
            int index = ch - 'a';
            if (!node->children[index])
                node->children[index] = new TrieNode();
            node = node->children[index];
            node->prefixCount++;
        }
        node->wordCount++;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (!node->children[index])
                return false;
            node = node->children[index];
        }
        return node->wordCount > 0;
    }

    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            int index = ch - 'a';
            if (!node->children[index])
                return false;
            node = node->children[index];
        }
        return true;
    }

    int countWordsEqualTo(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (!node->children[index])
                return 0;
            node = node->children[index];
        }
        return node->wordCount;
    }

    int countWordsStartingWith(string prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            int index = ch - 'a';
            if (!node->children[index])
                return 0;
            node = node->children[index];
        }
        return node->prefixCount;
    }
};

int main() {
    Trie trie;
    trie.insert("apple");
    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");

    cout << trie.countWordsEqualTo("apple") << endl;      // 2
    cout << trie.countWordsEqualTo("app") << endl;        // 1
    cout << trie.countWordsStartingWith("ap") << endl;    // 3
    cout << trie.countWordsStartingWith("ba") << endl;    // 1
    cout << trie.countWordsEqualTo("bad") << endl;        // 0

    return 0;
}
