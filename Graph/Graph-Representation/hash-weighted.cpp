#include <bits/stdc++.h>
using namespace std;

typedef unordered_map<int, vector<pair<int, int>>> GRAPH;

void add_new(GRAPH &graph, int from, int to, int wt)
{
    graph[from].push_back({to, wt});
    graph[to].push_back({from, wt});
}