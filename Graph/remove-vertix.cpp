#include <bits/stdc++.h>
using namespace std;

typedef unordered_map<int, set<int>> GRAPH;

void add_list(GRAPH &graph, int from, int to)
{
    graph[from].insert(to);
    graph[to].insert(from);
}

void remove_vertex(GRAPH &graph, int vertex)
{
    // Check if the vertex exists in the graph
    auto it = graph.find(vertex);
    if (it != graph.end())
    {
        // Iterate over the adjacency list of the vertex to be removed
        for (int neighbor : it->second)
        {
            // Remove the vertex from each neighbor's adjacency set
            graph[neighbor].erase(vertex);
        }
        // Remove the vertex itself from the graph
        graph.erase(it);
    }
}

/*

We used Hash set not vector because set removes elements in O(1)

*/