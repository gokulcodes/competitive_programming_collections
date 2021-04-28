#include <bits/stdc++.h>

using namespace std;




int main(){
    int n;
    cin >> n;
    vector<int> coins(n, 0);

    for(auto &el : coins) cin >> el;
    if(n==1){
        cout << n << endl;
        return 0;
    }

    sort(coins.begin(), coins.end(), greater<int>() );

    for(int i = 0; i <= n; i++){
        int my_sum = accumulate(coins.begin(), coins.begin()+i, 0);
        int rem_sum = accumulate(coins.begin()+i, coins.end(), 0);
        if(my_sum > rem_sum){
            cout << i << endl;
            break;
        }
    }

    return 0;
}