#include <bits/stdc++.h>

using namespace std;

// 2c2 + 2c2

int main(){
    int n;
    cin >> n;
    vector<vector<char> > cake(n, vector<char>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char el;
            cin >> el;
            cake[i][j] = el;
        }
    }
    int happy = 0;
    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j <= n; j++){
            if(c == 2){
                // cout << "h " << happy << '\n';
                happy++;
                c = 0;
                continue;
            }
            if(j == n) break;
            if(cake[i][j] == 'C'){
                c++;
            }
            // cout << c << ' ';
        }
        cout << '\n';
    }

    cout << happy << '\n';

    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 1; j <= n; j++){
            if(c == 2){
                // cout << "h " << happy << '\n';
                // happy++;
                c = 0;
                continue;
            }
            if(j == n) break;
            if(cake[j][i] == 'C' && cake[j-1][i] == 'C'){
                c++;
            }
            happy += c;
            cout << c << ' ';
        }
        cout << '\n';

    }

    cout << happy << '\n';

    return 0;
}