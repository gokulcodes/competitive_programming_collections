#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll n;
    cin >> n;
    int bill = 0;
    for(int i = 1; i <= 5; i++){
        if(n >= 100){
            int div = n/100;
            bill+=div;
            n = n % 100;
        }else if(n >= 20){
            int div = n/20;
            bill+=div;
            n = n % 20;
        }else if(n >= 10){
            int div = n/10;
            bill+=div;
            n = n % 10;
        }else if(n >= 5){
            int div = n/5;
            bill+=div;
            n = n % 5;
        }else if(n >= 1){
            bill+=n;
            break;
        }
    }
    cout << bill << '\n';

    return 0;
}