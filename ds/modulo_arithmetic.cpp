#define ll long long
#include <bits/stdc++.h>

using namespace std;

const int mod = 10;

int main(){
    ll a  = 28, b = 7;
    int ans = ((a / b)%mod+mod) % mod;
    cout << ans << endl;
    return 0;
}