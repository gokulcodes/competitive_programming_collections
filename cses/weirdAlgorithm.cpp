#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll n;
    cin >> n;
    while(n != 1){
        cout << n << " ";
        if(n%2==0){
            n =n/2;
        }else{
            n *=3;
            n++;
        }
    }
    cout << n << " ";
    return 0;
}