#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int to;
    int cost;
};

typedef vector<vector<edge>> GRAPH;

void add_directed_edge(GRAPH &graph, int from, int to, int cost)
{
    graph[from].push_back({to, cost});
}

void add_undirected_edge(GRAPH &graph, int from, int to, int cost)
{
    graph[from].push_back({to, cost});
    graph[to].push_back({from, cost});
}

void print(GRAPH &graph)
{
    int nodes = graph.size();
    for (int from = 0; from < nodes; from++)
    {
        cout << "Node " << from << " has neibhours: ";
        for (int edge = 0; edge < graph[from].size(); edge++)
            cout << graph[from][edge].to << " Cose is " << graph[from][edge].cost << " ";
        cout << "\n";
    }
}