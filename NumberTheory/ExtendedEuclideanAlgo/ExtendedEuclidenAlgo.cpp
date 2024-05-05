#include<bits/stdc++.h>
using namespace std;


pair<int, int>check_gcd(int a, int b){
    if(b == 0) return {1, 0};
    auto [x2,y2] = check_gcd(b, a%b);
    int x = y2;
    int y = x2 - (a/b)*y2;
    return {x, y};
}

int main(int argc, char const *argv[])
{
    // ax+by = gcd(a, b)

    int a, b;
    cin>>a>>b;

    auto [x, y] = check_gcd(a, b);
    cout<<x<<" "<<y<<endl;

    return 0;
}
