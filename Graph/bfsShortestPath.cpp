#include<bits/stdc++.h>
using namespace std;

vector<int> bfsShortestPath(vector<vector<int>>& adj, int src) {
    int n = adj.size();
    vector<int> visited(n, -1); 
    queue<int> q;

    visited[src] = 0; // Distance from source to itself is 0
    q.push(src);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int j : adj[node]) {
            if (visited[j] == -1) { // If neighbor hasn't been visited
                visited[j] = visited[node] + 1; // Update distance
                q.push(j); // Add to queue for further exploration
            }
        }
    }

    return visited;
}


int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src; cin>>src;
    vector<int> dis = bfsShortestPath(adj, src);
    cout<< "shortest dis from " << src <<": "<< endl;
    for (int i = 0; i < n; i++)
    {
        cout<< i << " : ";
        if(dis[i] == -1) cout<<"unreachable" << endl;
        else cout<< dis[i] << endl;
    }
    
    
    return 0;
}
