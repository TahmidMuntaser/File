#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

vector<int> comtor(int n){
    vector<int> phi(n+1);

    for (int i = 0; i <= n; i++)
    {
        phi[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if(phi[i] == i){
            for (int j = i; j <= n; j+=i)
            {
                phi[j] -= phi[j]/i; 
            }
            
        }
    }
    return phi;
    
}

int main(int argc, char const *argv[])
{
    int n; cin>>n;
    vector<int> phi = comtor(n);
    for (ll i = 1; i <= n; i++)
    {
        cout<<"phi of "<<i<<" = "<<phi[i]<<nl;
    }cout<<nl;
    
    return 0;
}
