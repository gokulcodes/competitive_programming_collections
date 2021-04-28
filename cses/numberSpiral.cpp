#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    while (ts--){
        long long y,x;
        cin >> y >> x;
        ll z = max(y, x); // 3
        ll z2 = (z-1)*(z-1), ans; // 4
        if(z%2){ // true
            if(y == z){
                ans = z2+x;
            }else{ // true
                ans  = z2+2*z-y;
            }
        }else{
            if(x == z) {
                ans =z2+y;
            }else{
                ans = z2+2*z-x;
            }
        }
        cout << ans << endl;
    }
    


    return 0;
}