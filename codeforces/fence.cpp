#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int count = 0;
    while(n--){
        int ph;
        cin >> ph;
        if(ph > h){
            count = count + 2;
        }else{
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}