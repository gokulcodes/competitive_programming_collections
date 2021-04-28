#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    int temp = ts;
    while(ts--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int score = 0;
        
        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n-(i+1)]) score++;
        }
        
        cout << "Case #" << temp - ts << ": " << max(k, score) - min(k, score) << endl;
    }
    return 0;
}