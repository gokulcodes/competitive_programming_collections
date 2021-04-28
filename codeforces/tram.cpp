#include <bits/stdc++.h>

using namespace std;

int main(){
    int stops;
    cin >> stops;
    int inside = 0;
    vector<int> vt;
    while(stops--){
        int a, b;
        cin >> a >> b;
        a = abs(inside - a);
        inside = a+b;
        vt.push_back(inside);
    }
    cout << *max_element(vt.begin(), vt.end()) << '\n';

    return 0;
}