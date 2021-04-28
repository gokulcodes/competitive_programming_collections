#define ll long long
#define Rep(i, n) for(int i = 0; i < n; i++)
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int> vt = {2, 1, 3, 4};
    cin >> n;
    ll ans = 0;
    int mx = 0;
    Rep(i, n){
        int x;
        cin >> x;
        mx = max(x, mx);
        ans += mx-x;
    }
    cout << ans << endl;
    next_permutation(vt.begin(), vt.end());
    for(int a : vt){
        cout << a << endl;
    }
    return 0;
}