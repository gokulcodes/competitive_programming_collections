#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    while(ts--){
        int n;
        cin >> n;
        vector<int> m(n);

        for(int i = 0; i < n; i++){
            int el;
            cin >> el;
            m[i] = el;
        }
        
        vector<int> distinct;
        vector<int> new_distinct;

        for(auto i = 0; i < n; i++){
            distinct.push_back(m[i]);
        }

        sort(distinct.begin(), distinct.end());

        for(auto i = 0; i < n; i++){
            auto it1 = lower_bound(distinct.begin(), distinct.end(), distinct[i]);
            auto it2 = upper_bound(distinct.begin(), distinct.end(), distinct[i]);
            if(it2 - it1 == 1){
                new_distinct.push_back(distinct[i]);
            }
        }

        if(!new_distinct.size()){
            cout << -1 << '\n';
            continue;
        }

        auto min_el = *min_element(new_distinct.begin(), new_distinct.end());

        for(int i = 0; i < n; i++){
            if(m[i] == min_el){
                cout << i+1 << '\n';
                break;
            }
        }
    }
    return 0;

}