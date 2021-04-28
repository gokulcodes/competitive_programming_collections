#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int groups = 1;

    if(n == 1){
        cout << groups << '\n';
        return 0;
    }

    vector<string> magnet(n);


    for(int i = 0; i < n; i++){
        string el;
        int val;
        cin >> val;
        if(val == 1){
            magnet[i] = "01";
            continue;
        }
        el = to_string(val);
        magnet[i] = el;
    }
    
    for(int i = 1; i < n; i++){
        if(magnet[i] != magnet[i-1]){
            groups++;
        }
    }

    cout << groups << '\n';

    return 0;
}