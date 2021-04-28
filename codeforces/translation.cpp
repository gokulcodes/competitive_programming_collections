#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string rev;
    cin >> rev;

    reverse(s.begin(), s.end());

    if(rev == s){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }

    return 0;
}