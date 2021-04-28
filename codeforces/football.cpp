#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    bool isDangerous = false;
    int count_0 = 0, count_1 = 0;

    for(int i = 0; i <= s.length(); i++){
        if(count_0 == 7 || count_1 == 7){
            isDangerous = true;
            break;
        }
        if(s[i] == '0'){
            count_0++;
            count_1 = 0;
        }
        else if(s[i] == '1'){
            count_1++;
            count_0 = 0;
        }
    }

    if(isDangerous) cout << "YES" << '\n';
    else cout << "NO" << '\n';


    return 0;
}