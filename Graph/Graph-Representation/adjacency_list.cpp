#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> GRAPH;

void add_directed_edge(GRAPH &graph, int from, int to)
{
    graph[from].push_back(to);
}

void add_undirected_edge(GRAPH &graph, int from, int to)
{
    graph[from].push_back(to);
    graph[to].push_back(from);
}

void print_adjaceny_matric(GRAPH &graph)
{
    int nodes = graph.size(); // size of rows
    for (int from = 0; from < nodes; ++from)
    {
        cout << "Node " << from << " has neighbours: ";
        for (int to = 0; to < graph[from].size(); to++)
            cout << graph[from][to] << " ";
        cout << "\n";
    }
}