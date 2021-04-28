#define ll long long 
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll n, k;
    cin >> n >> k;

    cout << setprecision(2);

    if(n%2 == 0){
        if(ceil(n/2) < k){
            k = k - n/2;
            cout << k * 2  << endl;
        }else{
            cout << (k-1) * 2 + 1 << endl;
        }
    }else{
        n = n+1;
        if(ceil(n/2) < k){
            k = k - n/2;
            cout << k * 2  << endl;
        }else{
            cout << (k-1) * 2 + 1 << endl;
        }
    }

    

    return 0;
}