#include <bits/stdc++.h>


using namespace std;

int main(){
    int ts;
    cin >> ts;
    int val=0;
    while(ts--){
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '-'){
                val--;
                break;
            }else if(s[i] == '+'){
                val++;
                break;
            }
        }
    }
    cout << val << '\n';

    return 0;
}