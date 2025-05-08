#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main(int argc, char const *argv[]) {
    ll n; cin >> n;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i*i <= n; i++)
    {
        if(isPrime[i]) {
            for (ll j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) cout << i << " ";
    }
    return 0;
}
