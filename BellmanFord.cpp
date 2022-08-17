#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;
const int inf = 1e9;

void BellmanFord(int src,int n, vector<vector<int>> edges)
{
    vector<int> dist(n,inf);
    dist[src] = 0;
    for (int i = 0; i < n-1; i++)
    {
        for(auto e : edges)
        {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            dist[v] = min(dist[v],  w + dist[u]);
    
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<dist[i]<<" ";
    }
    
}
int main()
{
    int n;cin>>n;
    int m;cin>>m;

    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    int src;cin>>src;
    BellmanFord(src,n,edges);
    
    
    
    _getch();
    return 0;
}