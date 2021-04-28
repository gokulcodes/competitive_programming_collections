#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool isEasy = true;
    while(n--){
        int el;
        cin >> el;
        if(el == 1){
            isEasy = false;
            break;
        }
    }
    if(isEasy) cout << "EASY" << '\n';
    else cout << "HARD" << '\n';

    return 0;
}