#define ll long long
#include <bits/stdc++.h>
using namespace std;

void elephant(){
    int g;
    cin >> g;
    while(g--){
        ll i, n, q;
        string s;
        cin >> i >> n >> q;
        if(i == 1){
            for(ll k = 0; k < n; k++){
                s = s + string(1, 'H');
            }
        }else{
            for(ll k = 0; k < n; k++){
                s = s + string(1, 'T');
            }
        }
        for(int r = 0; r < s.length(); r++){
            for(int k = 0; k <= r; k++){
                if(s[k] == 'H'){
                    s[k] = 'T';
                }else{
                    s[k] = 'H';
                }
            }
        }
        int countT=0, countH = 0;
        for(int out = 0; out < s.length(); out++){
            if(s[out] == 'T'){
                countT++;
            }else{
                countH++;
            }
        }
        if(q == 1){
            cout << countH << endl;
        }else{
            cout << countT << endl;
        }
    }
    
}


int main(){
    int test = 0;
    cin >> test;
    while(test--){
        elephant();
    }
    return 0;
}