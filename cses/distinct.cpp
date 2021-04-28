#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length(); 
    vector<int> vt(26);
    
    for(int i = 0; i < n; i++){
        int k = s[i]-'A';
        vt[k]++;
    }
    
    int max_el = *max_element(vt.begin(), vt.end());

    cout << max_el << '\n';

    return 0;
}