#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int n = s.length();
        if(n > 10){
            cout << '\n' << s[0] << n-2 << s[n-1];
        }else{
            cout << '\n' << s;
        }
    }

    return 0;
}