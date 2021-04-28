#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int &el : v)
        cin >> el;
    
    int global_sum = v[0], current_sum = v[0];
    vector<int> result;
    for(int i = 1; i < n; i++){
        current_sum += v[i];
        global_sum = max(global_sum, current_sum);
        current_sum = max(current_sum, 0);
    }
    cout << global_sum << endl;
    return 0;
}