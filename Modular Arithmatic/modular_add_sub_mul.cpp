
// Echelon 3 24 20 12 19 17 17 22 19 23 19 4 0 7 6 7 19 10 12 16 17 6 14 4 3
// 17 24 20 13 24 8 16 17 1 24 9 21 15 0 5 15 4 4 23 6 11 25 14 4 20 4 9 14 18
// 12 8 7 21 6 4 21 7 21 4 2 14 3 14 7 18 13 6 22 16 6 1 21 21 15 3 5 24 9 11
// 2 10 5 21 4 20 11 19 12 5 12 13 12 5 17 19 3 14 21 12 15 17 7 7 2 2 21 1 10
// 22 13 5

// Ascension 9 18 8 23 8 3 8 22 15 21 17 6 16 1 7 8 19 10 22 19 23 14 17 14 22 0 12
// 8 8 10 7 1 1 22

// Ascension 1 23 9 12 3 13 5 9 22 21 0 21 10 15 5 17 12 21 18 8 5 13 22 10 2 11 5 11 8 9 
// 19 23 2 14 17 10 7 15 7 12 21 25 16 25 0 23 12 23 13 22 8 9 25 4 20 19 11 14 24 17 9 21 
// 0 2 16 1 22 1 20 22 22 25 0 15 1 1 22 17

//  Decrypt the message.

#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nl "\n"
#define mod 998244353
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

ll modularAddition(int a, int b, int m) {
    return (a % m + b % m) % m;


}

ll modularSubtraction(int a, int b, int m) {
    return (a % m - b % m + m) % m;
}

ll modularMultiplication(int a, int b, int m) {
    return (a % m * b % m) % m;

    // (((a*b)%mod)*c)%mod; for multiple multiplications
}






void solve(){
    ll a, b;
    cin>>a>>b;
    ll add = modularAddition(a, b, mod);
    ll sub = modularSubtraction(a, b, mod);
    ll mul = modularMultiplication(a, b, mod);

    cout<<add<<nl;
    cout<<sub<<nl;
    cout<<mul<<nl;


}














// A lie is a lie. Just because they write it down and call it history, 
// doesn’t make it the truth. we live in a world where seeing is not believing 
// where only a few know what really happened.we live in a world where everything 
// you know is wrong.

















// "Sniping your enemy is like hunting, Fire at the wrong moment and your chance 
// will be forever lost. Patience, if we reveal our position to Amsel's men, this 
// fountain will be our grave."