#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    while(ts--){
        int n, x;
        cin >> n >> x;
        int n1 = n;
        vector<int> vt;

        while(n--){
            int el;
            cin >> el;
            vt.push_back(el);
        }
        
        int opt = 0;
        for(auto i = 0; i < vt.size(); i++){
            if(is_sorted(vt.begin(), vt.end())) break;
            if(vt[i] > x){
                swap(vt[i], x);
                opt++;
            }
        }

        if(is_sorted(vt.begin(), vt.end())){
            cout << opt << '\n';
        }else{
            cout << -1 << '\n';
        }

    }

    return 0;
}