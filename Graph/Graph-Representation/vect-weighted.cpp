#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> GRAPH;

void add_directed_edge(GRAPH &graph, int from, int to, int weight)
{
    // Add a directed edge from 'from' to 'to' with the given weight
    graph[from][to] = weight;
}

void add_undirected_edge(GRAPH &graph, int from, int to, int weight)
{
    // Add an undirected edge between 'from' and 'to' with the given weight

    // Add the edge from 'from' to 'to'
    graph[from][to] = weight;

    // Add the edge from 'to' to 'from'
    graph[to][from] = weight;
}

void print_adjacency_matrix(GRAPH &graph)
{
    int n = graph.size(); // no of rows
    for (int from = 0; from < n; from++)
    {
        for (int to = 0; to < n; to++)
        {
            if (graph[from][to] > 0)
                cout << "From " << from
                     << " to " << to << "There are "
                     << graph[from][to] << " edges" << "\n";
        }
    }
}