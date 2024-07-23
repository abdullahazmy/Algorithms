#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> GRAPH;

// Function to add a directed edge from 'from' to 'to' in the graph
void add_directed_edge(GRAPH &graph, int from, int to)
{
    // Increment the count of the edge from 'from' to 'to'
    graph[from][to] += 1;
}

// Function to add an undirected edge between 'from' and 'to' in the graph
void add_undirected_edge(GRAPH &graph, int from, int to)
{
    // Increment the count of the edge from 'from' to 'to'
    graph[from][to] += 1;

    // Increment the count of the edge from 'to' to 'from'
    graph[to][from] += 1;
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