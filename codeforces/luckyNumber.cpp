#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    string s = to_string(n);
    int lucky = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '4' || s[i] == '7'){
            lucky++;
        }
    }
    if(lucky == 4 || lucky == 7){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }

    return 0;
}