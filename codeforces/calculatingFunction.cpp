#define ll long long

#include <bits/stdc++.h>

using namespace std;

int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    if(n%2 == 0){
        sum = n/2;
    }else{
        sum = -(n+1)/2;
    }

    cout << sum << '\n';

    return 0;
}