#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    while(n--){
        string b;
        cin >> b;
        string a = b.substr(0, 2);
        for(int i = 2; i < b.length(); i+=2){
            a.append(string(1, b[i+1]));
        }
        cout << a << '\n';
    }
    return 0;
}