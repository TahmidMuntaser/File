#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define endl '\n'


int main(int argc, char const *argv[])
{
    int n ; cin >> n;
    vector<int> spf(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        spf[i] = i; // Initialize spf[i] to i
    }

    for (ll i = 2; i*i <= n; i++)
    {
        if(spf[i] == i) 
        {
            for (ll j = i*i; j <= n; j += i)
            {
                // cout << "j: " << j << " i: " << i << endl;
                if (spf[j] == j) // Update spf[j] only if it hasn't been updated before
                {
                    spf[j] = i; // Set the smallest prime factor of j to i
                }
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        cout << "SPF[" << i << "] = " << spf[i] << endl;
    }
    
    return 0;
}
