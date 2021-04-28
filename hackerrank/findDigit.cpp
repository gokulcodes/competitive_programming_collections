#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    while(ts--){
        int digit;
        cin >> digit;
        string s = to_string(digit);
        int count = 0;
        for(int i=0; i < s.length(); i++){
            int div = s[i] - '0';
            if(div == 0){
                continue;
            }
            if(digit%div == 0){
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}