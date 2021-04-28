#include <bits/stdc++.h>

using namespace std;

int calc(string s, char x, char y){
    int bal = 0, cnt = 0;

    for(char el : s){
        if(el == y){
            if(bal > 0){
                bal -= 1;
                cnt += 1;
            }
        }else if(el == x){
            bal += 1;
        }
    }

    return cnt;
}

int main(){
    int ts;
    cin >> ts;

    while(ts--){
        string s;
        cin >> s;
        cout << calc(s, '(', ')') + calc(s, '[', ']') << '\n';f
    }

    return 0;
}