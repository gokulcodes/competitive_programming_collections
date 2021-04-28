#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll n, sum=0, new_sum=0;
    cin >> n;

    ll new_in = n - 1;

    while(n!=0){
        sum = sum + n;
        n--;
    }

    while(new_in!=0){
        ll val; cin >> val;
        new_sum = new_sum + val; 
        new_in--;
    }
    ll result = sum - new_sum;
    cout << result << endl;
    return 0;
}