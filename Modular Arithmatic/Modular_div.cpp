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

ll extended_gcd(ll a, ll b, ll &x, ll &y) {
    if(a == 0){
        x = 0; y = 1;
        return b;
    }

    ll x1, y1;
    ll gcd = extended_gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return gcd;
}


ll modinv(ll a, ll m){
    ll x, y;
    ll gcd = extended_gcd(a, m, x, y);
    if(gcd != 1) {
        return -1; // Inverse doesn't exist
    } else {
        return (x % m + m) % m; // Ensure positive result
    }
}

ll moddiv(ll a, ll b, ll m) {
   a = a%m;
   ll inv = modinv(b, m);
   if(inv == -1) {
       return -1; // Division not possible
   } 
   
   else {
       return (inv * a) % m;
   }
}


void solve(){
    ll a, b, m;
    cin>>a>>b>>m;

    ll res = moddiv(a, b, m);
    if(res == -1){
        cout<<"Division not possible\n";
        return;
    }
    else {
        cout<<res<<"\n";
    }


}














// A lie is a lie. Just because they write it down and call it history, 
// doesn’t make it the truth. we live in a world where seeing is not believing 
// where only a few know what really happened.we live in a world where everything 
// you know is wrong.

















// "Sniping your enemy is like hunting, Fire at the wrong moment and your chance 
// will be forever lost. Patience, if we reveal our position to Amsel's men, this 
// fountain will be our grave."