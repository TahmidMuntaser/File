#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
// #define mod 1000000007
#define inf 1e18

int main(int argc, char const *argv[])
{
    ll a, b, mod;
    cin>>a>>b>>mod;

    ll res = 1;
    // a%=mod;
    // b%=mod;

    while (b)
    {
        if(b&1){
            res = (res*a)%mod;
            b--;
        }
        else{
            a = (a*a)%mod;
            b/=2;
        }
    }
    
    cout<<res<<endl;

    return 0;
}
