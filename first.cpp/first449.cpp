// Course Schedule 1st and 2nd | Pre-requisite Tasks | Topological Sort : -


// Schedule 1st : -



#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<int> inDegree(numCourses, 0);  // Store in-degrees
    vector<vector<int>> adj(numCourses);  // Adjacency list
    queue<int> q;

    // Step 1: Build the graph and calculate in-degrees
    for (auto& prereq : prerequisites) {
        adj[prereq[1]].push_back(prereq[0]);  // prereq[1] -> prereq[0]
        inDegree[prereq[0]]++;
    }

    // Step 2: Add nodes with in-degree 0 to the queue
    for (int i = 0; i < numCourses; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    int processedCourses = 0;

    // Step 3: Perform BFS
    while (!q.empty()) {
        int course = q.front();
        q.pop();
        processedCourses++;

        // Decrease in-degree of neighboring nodes
        for (int neighbor : adj[course]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // If all courses are processed, no cycle exists
    return processedCourses == numCourses;
}

int main() {
    int numCourses = 2;
    vector<vector<int>> prerequisites = {{1, 0}};  // 1 depends on 0

    if (canFinish(numCourses, prerequisites)) {
        cout << "It's possible to finish all courses!" << endl;
    } else {
        cout << "It's not possible to finish all courses!" << endl;
    }

    return 0;
}






// Schedule 2nd : -



#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    vector<int> inDegree(numCourses, 0);  // Store in-degrees
    vector<vector<int>> adj(numCourses);  // Adjacency list
    queue<int> q;
    vector<int> order;

    // Step 1: Build the graph and calculate in-degrees
    for (auto& prereq : prerequisites) {
        adj[prereq[1]].push_back(prereq[0]);  // prereq[1] -> prereq[0]
        inDegree[prereq[0]]++;
    }

    // Step 2: Add nodes with in-degree 0 to the queue
    for (int i = 0; i < numCourses; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    // Step 3: Perform BFS and generate topological order
    while (!q.empty()) {
        int course = q.front();
        q.pop();
        order.push_back(course);

        // Decrease in-degree of neighboring nodes
        for (int neighbor : adj[course]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // If the number of courses in the order is equal to numCourses, return order
    return order.size() == numCourses ? order : vector<int>();
}

int main() {
    int numCourses = 4;
    vector<vector<int>> prerequisites = {{1, 0}, {2, 1}, {3, 2}};  // 1 depends on 0, 2 depends on 1, 3 depends on 2

    vector<int> order = findOrder(numCourses, prerequisites);

    if (order.empty()) {
        cout << "It’s not possible to finish all courses!" << endl;
    } else {
        cout << "Course order: ";
        for (int course : order) {
            cout << course << " ";
        }
        cout << endl;
    }

    return 0;
}


