#include <bits/stdc++.h>

using namespace std;

int main(){
    int lw, bw;
    cin >> lw >> bw;
    int year = 0;
    while(lw <= bw){
        lw = lw*3;
        bw = bw*2;
        year++;
    }
    cout << year << '\n';
    return 0;
}