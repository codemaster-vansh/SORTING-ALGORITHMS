#include <iostream>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

class WeightedDirectedGraph{
    int vertices;
    vector<vector<pair<int,int>>> adjList;

public:
    WeightedDirectedGraph(int v){
        vertices = v;
        adjList.resize(v);
    }

    void addEdge(int u,int v, int weight){
        adjList[u].push_back({v,weight});
    }
};