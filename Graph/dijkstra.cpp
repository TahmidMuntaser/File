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

vector<int> dijkstra(int v, vector<pair<int, int>> adj[], int src) {
    vector<int> dist(v, INT_MAX);
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src}); // {distance, vertex}

    while(!pq.empty()){
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node])
        {
            int next = it.first;
            int wt = it.second;
            if (dist[next] > d + wt) {
                dist[next] = d + wt;
                pq.push({dist[next], next});
            }
        }
        
    }

    return dist;
}




void solve(){
    int v,e; cin>>v>>e;
    vector<pair<int, int>> adj[v];
    for (ll i = 0; i < e; i++)
    {
        int u, v, w; cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); 
    }
    int src; cin>>src;
    vector<int> dist = dijkstra(v, adj, src);
    for (int i = 0; i < v; i++)
    {
        cout<<i<<" : ";
        if (dist[i] == INT_MAX) cout << "∞ (unreachable)";
        else cout << dist[i];

        cout<<nl;
    }
    


}














// A lie is a lie. Just because they write it down and call it history, 
// doesn’t make it the truth. we live in a world where seeing is not believing 
// where only a few know what really happened.we live in a world where everything 
// you know is wrong.

















// "Sniping your enemy is like hunting, Fire at the wrong moment and your chance 
// will be forever lost. Patience, if we reveal our position to Amsel's men, this 
// fountain will be our grave."