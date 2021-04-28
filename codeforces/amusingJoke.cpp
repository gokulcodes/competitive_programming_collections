#include <bits/stdc++.h>

using namespace std;

int main(){
    string guest, host, pile;
    cin >> guest >> host >> pile;
    string result = guest + host;

    sort(pile.begin(), pile.end());
    sort(result.begin(), result.end());

    if(result == pile){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }

    return 0;
}