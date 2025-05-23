#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>> &adj, vector<bool> &visited){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it : adj[node]){
            if(!visited[it]){
                visited[it] = true;
                q.push(it);
            }
        }
    }
}

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            bfs(i, adj, visited);
            cnt++;
        }
    }

    cout << "Number of connected components: " << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
