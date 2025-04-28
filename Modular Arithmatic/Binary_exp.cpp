

// for a^b % mod

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

long long power(long long a, long long b)
{
    long long result = 1;
    while (b) {
        if (b & 1)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return result;
}




void solve(){
    ll a,b;
    cin>>a>>b;
    ll ans = power(a,b);
    cout<<ans;


}














// A lie is a lie. Just because they write it down and call it history, 
// doesn’t make it the truth. we live in a world where seeing is not believing 
// where only a few know what really happened.we live in a world where everything 
// you know is wrong.

















// "Sniping your enemy is like hunting, Fire at the wrong moment and your chance 
// will be forever lost. Patience, if we reveal our position to Amsel's men, this 
// fountain will be our grave."