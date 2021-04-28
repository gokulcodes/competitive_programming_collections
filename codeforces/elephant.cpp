#define ll long long    
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll friendPos;
    cin >> friendPos;
    if(friendPos <= 5){
        cout <<  1 << '\n';
        return 0;
    }
    int steps = 0;
    steps = friendPos/5;

    if(friendPos%10 < 5 && friendPos%10 != 0){
        steps++;
    }

    if(friendPos%10 > 5 && friendPos%10 <= 9){
        steps++;
    }

    cout << steps << '\n';
    return 0;   
}