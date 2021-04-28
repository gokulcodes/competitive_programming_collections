#include <bits/stdc++.h>

using namespace std;


int main(){
    int n = 5;
    vector<int> vt = {2, 1, 2, 3, 4}, cnt(n+1),  idx(n+1);
    for(auto i = 0; i < vt.size(); i++){
        ++cnt[vt[i]];
        idx[vt[i]] = i+1;
    }
    int ans = -1;

    for (int i = 0; i <= n; ++i) {
        if (cnt[i] == 1) {
            ans = idx[i];
            break;
        }
    }

    cout << ans << '\n';

    return 0;
}