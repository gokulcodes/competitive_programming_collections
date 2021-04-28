#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> money(n, 0);
    for(ll &el : money) cin >> el;

    ll count = 1, range = INT_MIN;

    if(n == 1){
        cout << 1 << '\n';
        return 0;
    }

    for(int i = 1; i < n; i++){
        if(money[i] >= money[i-1]){
            count++;
        }else{
            count = 1;
        }
        range = max(count, range);
    }

    cout << range << endl;

    return 0;
}