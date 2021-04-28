#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    while(ts--){
        int n;
        cin >> n;
        if(n < 10){
            cout << 1 << '\n';
            cout << n << '\n';
            continue;
        }
        vector<int> ans;
        int power=1;
        while(n > 0){
            if(n%10 > 0){
                ans.push_back((n%10)*power);
            }
            n /= 10;
            power *= 10;
        }
        cout << ans.size() << '\n';
        for(int el : ans) cout << el << " ";
        cout << '\n';
    }


    return 0;
}