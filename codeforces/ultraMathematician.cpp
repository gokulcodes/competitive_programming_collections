#include <bits/stdc++.h>

using namespace std;

int main(){
    string f_s, s_s;
    cin >> f_s >> s_s;
    
    string result = "";
    for(int i = 0; i < f_s.length(); i++){
        if(f_s[i] == s_s[i]){
            result.append("0");
        }else{
            result.append("1");
        }
    }
    cout << result << '\n';

    return 0;
}