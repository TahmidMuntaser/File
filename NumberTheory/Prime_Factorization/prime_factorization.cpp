#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main(int argc, char const *argv[])
{
    int n; cin>>n;
    for (ll i = 2; i*i <= n; i++)
    {
        while (n%i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if(n>1) cout << n << " ";
    
    return 0;
}
