#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    int count = 0;
    while(ts--){
        int p, v, t;
        cin >> p >> v >> t;
        if((p+v)+t >= 2){
            count++;
        }
    }
    cout << count << '\n';

    return 0;
}