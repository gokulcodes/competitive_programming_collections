#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int u_c = 0, l_c = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            u_c++;
        }else if(s[i] >= 97 && s[i] <= 122){
            l_c++;
        }
    }
    if(u_c <= l_c){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }else if(u_c > l_c){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s << '\n';
    return 0;
}