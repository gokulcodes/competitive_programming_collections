#include <bits/stdc++.h>

using namespace std;

// GBBGBB

int main(){
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for(int sec = 0; sec < t; sec++){
        for(int i = 0; i < n; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                char temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                i++;
            }
        }
    }
    cout << s<< '\n';
    return 0;
}