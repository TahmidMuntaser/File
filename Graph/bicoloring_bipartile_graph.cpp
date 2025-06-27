#include<bits/stdc++.h>
using namespace std;


bool isBipartite(int n, vector<vector<int>>& adj){
    vector<int> color(n+1, -1);

    for (int i = 0; i < n; i++)
    {
        if(color[i] == -1){
            queue<int> q;
            q.push(i);
            color[i] = 0; 


            while (!q.empty())
            {
                int node = q.front();
                q.pop();

                for(int j: adj[node]){
                    if(color[j] == -1){
                        color[j] = 1 - color[node]; 
                        q.push(j);
                    } 
                    else if(color[j] == color[node]) {
                        return false; 
                    }
                }
            }
            
        }
    }

    return true;
    
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    // n = node, m = edge;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    if(isBipartite(n, adj)){
        cout << "Bipartite" << endl;
    } else {
        cout << "Not bipartite" << endl;
    }
    

    return 0;
}
