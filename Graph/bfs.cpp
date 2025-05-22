#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nl "\n"
#define mod 1000000007
#define Y cout<<"YES"<<"\n"
#define N cout<<"NO"<<"\n"
#define vll vector<ll>
#define inp(v) for (ll i = 0; i < n; ++i){ll kk; cin>>kk; v.push_back(kk);}
#define out(v, n) for (ll i = 0; i < n; ++i){cout<<v[i]<<" ";}

using namespace std;

void solve();

int main(int argc, char const *argv[])
{
    io
    ll testcases = 1, cc = 0;
    // cin>>testcases;
 
    while(cc<testcases){
        //cout<<"#Case "<<cc+1<<" :";
        solve(); ++cc;
    }
    return 0;
}

void bfs(int start, vector<vector<int>> &adj, vector<bool> &visited){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int node = q.front();
        cout<<node<<" ";
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
    printf("Enter the number of nodes and edges: ");
    cin>>n>>m;

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    printf("Enter the edges (u v): ");
    for (int i = 0; i < m; i++)
    {
       int u, v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    printf("Enter the starting node: ");
    int start; cin>>start;

    cout<<"BFS Traversal: ";
    bfs(start, adj, visited);
    cout<<endl;
    


}

