#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    while(ts--){
        int seq;
        cin >> seq;
        vector<int> store(seq);
        
        for(auto &it : store) cin >> it;

        vector<int> index(seq+1, 1);

        auto n = unique(store.begin(), store.end())-store.begin();

        store.resize(n);

        for(int i = 0; i < n; i++)
            ++index[store[i]];
        
        index[store[0]]--;
        index[store[n-1]]--;
        int ans = 1e9;
        for(int i = 0; i < n; ++i)
            ans = min(ans, index[store[i]]);

        cout << ans << '\n';

    }

    return 0;
}