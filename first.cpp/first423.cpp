// LFU Cache : - 


#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

class LFUCache {
    int time, capacity;
    struct Node {
        int key, val, freq, timestamp;
        bool operator<(const Node& other) const {
            if (freq == other.freq)
                return timestamp < other.timestamp;
            return freq < other.freq;
        }
    };

    unordered_map<int, Node> mp;
    set<Node> st;

public:
    LFUCache(int capacity) {
        this->capacity = capacity;
        time = 0;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) return -1;

        Node node = mp[key];
        st.erase(node); // remove from set before updating
        node.freq++;
        node.timestamp = ++time;
        st.insert(node); // reinsert with updated values
        mp[key] = node;
        return node.val;
    }

    void put(int key, int value) {
        if (capacity == 0) return;

        if (mp.find(key) != mp.end()) {
            Node node = mp[key];
            st.erase(node);
            node.val = value;
            node.freq++;
            node.timestamp = ++time;
            st.insert(node);
            mp[key] = node;
        } else {
            if (mp.size() == capacity) {
                Node lfu = *st.begin(); // least freq and oldest
                st.erase(st.begin());
                mp.erase(lfu.key);
            }
            Node node = {key, value, 1, ++time};
            st.insert(node);
            mp[key] = node;
        }
    }
};

int main() {
    cout << "LFU Cache Test:\n";
    LFUCache lfu(2);

    lfu.put(1, 1);
    lfu.put(2, 2);
    cout << lfu.get(1) << endl; // 1
    lfu.put(3, 3);              // evicts key 2
    cout << lfu.get(2) << endl; // -1
    cout << lfu.get(3) << endl; // 3
    lfu.put(4, 4);              // evicts key 1
    cout << lfu.get(1) << endl; // -1
    cout << lfu.get(3) << endl; // 3
    cout << lfu.get(4) << endl; // 4

    return 0;
}
