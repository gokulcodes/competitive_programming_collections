#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ts = 0;
    cin >> ts;
    while(ts--){
        int cars = 0;
        vector<int> curr;
        cin >> cars;
        for(int i = 0; i < cars; i++){
            int el;
            cin >> el;
            curr.push_back(el);
        }
        int ans = 0, speedOfPrev = curr[0];
        for(auto j = 0; j < curr.size(); j++){
            if(speedOfPrev >= curr[j]){
                ans++;
                speedOfPrev = curr[j];
            }
        }
        cout << ans << endl;
    }

    return 0;
}