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

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};


void bfsMatrix(vector<vector<int>>& grid, int startX, int startY) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;

    // Check if the starting point is valid
    if (grid[startX][startY] == 0) {
        cout << "Starting cell is blocked (0). BFS cannot start.\n";
        return;
    }

    q.push({startX, startY});
    visited[startX][startY] = true;

    cout << "\nBFS Traversal from (" << startX << "," << startY << "):\n";

    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        cout << "(" << x << "," << y << ")\n";

        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (newX >= 0 && newY >= 0 && newX < n && newY < m &&
                !visited[newX][newY] && grid[newX][newY] == 1) {
                visited[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }
}





void solve(){
    int n, m; cin>> n >> m;
    int startX, startY;
    vector<vector<int>> a(n, vector<int>(m));
     for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cin >> startX >> startY;
    if (startX < 0 || startX >= n || startY < 0 || startY >= m) {
        cout << "Invalid starting coordinates.\n";
        return;
    }   
    bfsMatrix(a, startX, startY);


}














// A lie is a lie. Just because they write it down and call it history, 
// doesn’t make it the truth. we live in a world where seeing is not believing 
// where only a few know what really happened.we live in a world where everything 
// you know is wrong.

















// "Sniping your enemy is like hunting, Fire at the wrong moment and your chance 
// will be forever lost. Patience, if we reveal our position to Amsel's men, this 
// fountain will be our grave."