#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, n;
    cin >> a >> n;

    int res = 1;

    while (n>0)
    {
        if(n&1){
            res*=a;
            n--;
        }
        else{
            a*=a;
            n/=2;
        }
    }
    cout << res << endl;
    

    return 0;
}
