#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin>>ts;
    while(ts--){
        long long n, k;
        cin >> n >> k;
        int gcdArray[n];
        for(int i = 0; i < n; i++){
            cin >> gcdArray[i];
        }
        int gcdX = gcdArray[0];
        
        for(int i = 1; i < n; i++){
            gcdX = __gcd(gcdX, gcdArray[i]);
        }

        bool isGcd = true;

        for(int i = 2; i * i <= gcdX; i++){
            cout << i << endl;
            while(gcdX%i == 0){
                if(i > k){
                    isGcd = false;
                }
                gcdX /= i;
            }
        }

        if(gcdX > k) isGcd = false;
        if(isGcd){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }


    return 0;
}