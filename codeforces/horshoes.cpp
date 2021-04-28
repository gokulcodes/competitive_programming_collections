#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    vector<ll> vt;
    vt.push_back(s1);
    vt.push_back(s2);
    vt.push_back(s3);
    vt.push_back(s4);

    int result = INT_MIN;
    sort(vt.begin(), vt.end());


    for(int i = 0; i < 4; i++){
        auto it = lower_bound(vt.begin(), vt.end(), vt[i]);
        auto it1 = upper_bound(vt.begin(), vt.end(), vt[i]);
        int pos = it1 - it;
        result = max(pos, result);
    }

    if(vt[0] == vt[1] && vt[2] == vt[3] && vt[0] != vt[2] && vt[1] != vt[3]){
        cout << 2 << '\n';
        return 0;
    }

    cout << result - 1 << '\n';

    return 0;
}