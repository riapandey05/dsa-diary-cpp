#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS on a graph
void bfs(int start, const vector<vector<int>>& adjList, int numNodes) {
    vector<bool> visited(numNodes, false); // Track visited nodes
    queue<int> q; // Queue for BFS

    visited[start] = true;
    q.push(start);

    cout << "BFS traversal starting from node " << start << ": ";

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        // Visit all adjacent nodes
        for (int neighbor : adjList[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    cout << endl;
}

int main() {
    int numNodes = 6;

    // Graph represented as an adjacency list
    vector<vector<int>> adjList(numNodes);

    // Adding edges to the graph
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0, 4};
    adjList[3] = {1, 5};
    adjList[4] = {1, 2, 5};
    adjList[5] = {3, 4};

    // Perform BFS starting from node 0
    bfs(0, adjList, numNodes);

    return 0;
}
