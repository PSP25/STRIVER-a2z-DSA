#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

#define V 5

int minDistance(int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

void printPath(vector<int>& parent, int j) {
    if (parent[j] == -1)
        return;
    printPath(parent, parent[j]);
    cout << "-> " << j << " ";
}

void printSolution(int dist[], vector<int>& parent) {
    cout << "Vertex \t Distance from Source \t Path" << endl;
    for (int i = 0; i < V; i++) {
        cout << i << " \t\t\t\t" << dist[i] << " \t\t\t\t";
        printPath(parent, i);
        cout << endl;
    }
}

void dijkstra(int graph[V][V], int src) {
    int dist[V];
    bool sptSet[V];
    vector<int> parent(V, -1);
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }
    printSolution(dist, parent);
}

int main() {
    int graph[V][V];
    cout << "Enter the adjacency matrix for the graph (enter 0 for no edge):" << endl;
    for (int i = 0; i < V; i++) {
        cout << "Enter row " << i + 1 << ": ";
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }
    dijkstra(graph, 0);
    return 0;
}