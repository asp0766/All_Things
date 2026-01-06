// Alien Dictionary - Topological Sort : -



#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

string alienOrder(vector<string>& words) {
    unordered_map<char, vector<char>> graph;  // Graph to store edges
    unordered_map<char, int> inDegree;  // Store in-degree of each node

    // Step 1: Initialize the graph and in-degree map
    for (auto& word : words) {
        for (char c : word) {
            if (inDegree.find(c) == inDegree.end()) {
                inDegree[c] = 0;  // Initialize in-degree to 0 for each character
            }
        }
    }

    // Step 2: Build the graph by comparing adjacent words
    for (int i = 1; i < words.size(); i++) {
        string word1 = words[i - 1];
        string word2 = words[i];
        
        int len = min(word1.length(), word2.length());
        for (int j = 0; j < len; j++) {
            if (word1[j] != word2[j]) {
                graph[word1[j]].push_back(word2[j]);  // Add directed edge from word1[j] to word2[j]
                inDegree[word2[j]]++;  // Increment the in-degree of word2[j]
                break;  // Only the first mismatch gives the order
            }
        }
    }

    // Step 3: Perform Kahn's Algorithm (BFS-based Topological Sort)
    queue<char> q;
    string result = "";

    // Add nodes with in-degree 0 to the queue
    for (auto& pair : inDegree) {
        if (pair.second == 0) {
            q.push(pair.first);
        }
    }

    while (!q.empty()) {
        char node = q.front();
        q.pop();
        result += node;

        for (char neighbor : graph[node]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // Step 4: If the result contains all characters, return it; otherwise, return an empty string (cycle detected)
    if (result.length() == inDegree.size()) {
        return result;
    }
    return "";  // Cycle detected or incomplete order
}

int main() {
    vector<string> words = {"wrt", "wrf", "er", "ett", "rftt"};
    
    string order = alienOrder(words);
    
    if (order.empty()) {
        cout << "Cycle detected or impossible to determine the order!" << endl;
    } else {
        cout << "The order of characters in the alien language is: " << order << endl;
    }

    return 0;
}




