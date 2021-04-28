#include<bits/stdc++.h>

using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int totalDollars = 0;
    for(int i = 1; i <= w; i++){
        totalDollars = totalDollars + k * i;
    }
    if(n > totalDollars){
        cout << 0 << endl;
        return 0;
    }
    cout << totalDollars - n << endl;

    return 0;
}