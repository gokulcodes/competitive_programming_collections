#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int min_el = INT_MAX, max_el = INT_MIN;
    int changes = 0;
    for(int i = 1; i <= n; i++){
        int el;
        cin >> el;
        if(i == 1){
            min_el = el;
            max_el = el;
            continue;
        }
        if(el < min_el){
            min_el = min(el, min_el);
            changes++;
        }else if(el > max_el){
            max_el = max(el, max_el);
            changes++;
        }
    }
    cout << changes << '\n';

    return 0;
}