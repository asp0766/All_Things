// Trie By Take U Forward ( Striver 7 Videos Playlist )  : -
// https://youtube.com/playlist?list=PLgUwDviBIf0pcIDCZnxhv0LkHf5KzG9zp&si=C62kcyGU5rrv9hwb


// Implement the Trie : -


#include <iostream>
using namespace std;

const int ALPHABET_SIZE = 26;

struct TrieNode {
    TrieNode* children[ALPHABET_SIZE];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
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
        }
        node->isEndOfWord = true;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (!node->children[index])
                return false;
            node = node->children[index];
        }
        return node->isEndOfWord;
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
};

int main() {
    Trie trie;
    trie.insert("apple");
    cout << trie.search("apple") << endl;    // 1
    cout << trie.search("app") << endl;      // 0
    cout << trie.startsWith("app") << endl;  // 1
    trie.insert("app");
    cout << trie.search("app") << endl;      // 1
    return 0;
}


