#include<bits/stdc++.h>
using namespace std; 

pair<int, int>check_gcd(int a, int b){
    int x2 = 0, y2 = 1, x = 1, y = 0, temp;
    while (b!=0)
    {
        int q = a/b;
        temp = a;
        a = b;
        b = temp%b;
        temp = x2;
        x2 = x - q*x2;
        x = temp;
        temp = y2;
        y2 = y - q*y2;
        y = temp;
    }

    return {x ,y};
    
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin>>a >>b;

    auto [x,y] = check_gcd(a, b);
    cout<<x<<" "<<y<<endl;
    return 0;
}
