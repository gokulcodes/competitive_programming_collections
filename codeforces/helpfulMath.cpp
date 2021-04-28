#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    if(s.length() == 1){
        cout << s << '\n';
        return 0;
    }
    vector<int> vt;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            int el = (int)s[i];
            vt.push_back(el);
        }
    }
    sort(vt.begin(), vt.end());
    string final = "";
    for(auto el : vt){
        final = final + string(1, el);
        final.append(string(1, '+'));
    }
    final.pop_back();
    cout << final << '\n';

    return 0;
}