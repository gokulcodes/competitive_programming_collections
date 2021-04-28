#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int test = 0;
    cin >> test;

    while(test--){
        string s;
        cin >>s;
        vector<int> lFreq(26), rFreq(26);
        for(auto i = 0; i < s.length()/2; i++){
            char c = s[i];
            lFreq[c-'a']++;
        }

        for(auto i = (s.length()+1) / 2; i < s.length(); i++){
            char c = s[i];
            rFreq[c-'a']++;
        }
        bool isSame = true;
        for(auto i = 0; i < 26; i++){
            if(lFreq[i] != rFreq[i]){
                isSame = false;
                break;
            }
        }

        if(isSame){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}