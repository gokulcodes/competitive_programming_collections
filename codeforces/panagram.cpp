#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n < 26){
        cout << "NO" << '\n';
        return 0;
    }

    string result = "YES";

    sort(s.begin(), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> c;

    for(int i = 0; i < n; i++){
        c.insert(s[i]);
    }

    if((int)c.size() < 26){
        result = "NO";
    }

    cout << result << '\n';

    return 0;
}