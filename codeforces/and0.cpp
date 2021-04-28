#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const LL mod = 1e9+7;

LL power(int n, int k){
    LL res = 1;
    
    for(int i = 0; i < k; i++) res = (res * n) % mod;
    
    return res;
}

int main(){
    int ts;
    cin >> ts;
    
    while(ts--){
        int n, k;
        cin >> n >> k;
        
        cout << power(n, k) << endl;
        
    }
    
    
}