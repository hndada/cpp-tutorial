// This code is entirely copied from generated text in ChatGPT,
// except the example graph.
#include <iostream>
#include <vector>
#include <queue>

using std::cout, std::endl;
using std::vector, std::queue;

void bfs(const vector<vector<int>> &adj, int start) {
    vector<bool> visited(adj.size(), false); 
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (int u : adj[v]) {
            if (!visited[u]) {
                q.push(u);
                visited[u] = true;
            }
        }
    }
}

int main() {
    vector<vector<int>> adj = {
        {1, 2},    // Neighbors of 0
        {0, 3},    // Neighbors of 1
        {0, 4, 5}, // Neighbors of 2
        {1},       // Neighbors of 3
        {2},       // Neighbors of 4
        {2},       // Neighbors of 5
    };

    cout << "BFS starting from vertex 0: ";
    bfs(adj, 0);
    cout << endl;

    return 0;
}
