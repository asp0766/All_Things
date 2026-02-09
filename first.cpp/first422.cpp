// LRU Cache : - 


#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class LRUCache {
    int capacity;
    list<pair<int, int>> dq; // {key, value}
    unordered_map<int, list<pair<int, int>>::iterator> mp;

public:
    LRUCache(int cap) {
        capacity = cap;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        // Move accessed node to front
        auto it = mp[key];
        int value = it->second;
        dq.erase(it);
        dq.push_front({key, value});
        mp[key] = dq.begin();
        return value;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            dq.erase(mp[key]);
        } else if (dq.size() == capacity) {
            int lastKey = dq.back().first;
            dq.pop_back();
            mp.erase(lastKey);
        }

        dq.push_front({key, value});
        mp[key] = dq.begin();
    }
};

int main() {
    LRUCache cache(2); // capacity 2

    cache.put(1, 1);
    cache.put(2, 2);
    cout << cache.get(1) << endl; // returns 1
    cache.put(3, 3);              // evicts key 2
    cout << cache.get(2) << endl; // returns -1 (not found)
    cache.put(4, 4);              // evicts key 1
    cout << cache.get(1) << endl; // returns -1 (not found)
    cout << cache.get(3) << endl; // returns 3
    cout << cache.get(4) << endl; // returns 4

    return 0;
}
