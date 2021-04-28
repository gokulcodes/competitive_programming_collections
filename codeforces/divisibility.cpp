#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    while(ts--){
        ll a, b;
        cin >> a >> b;
        if(a%b == 0){
            cout << 0 << '\n';
            continue;
        }
        ll moves = b - a%b;
        cout << moves << '\n';
    }


    return 0;
}