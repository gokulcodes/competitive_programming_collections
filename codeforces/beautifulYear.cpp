#include <bits/stdc++.h>

using namespace std;

bool distinct(int n){
    string s = to_string(n);

    bool isDistinct = true;

    vector<int> arr(10);

    for(int i = 0; i < s.length(); i++){
        int index = (int)(s[i] - '0');
        ++arr[index];  
        if(arr[index] > 1){
            isDistinct = false;
            break;
        }
    }

    return isDistinct;
}

int main(){
    int y;
    cin >> y;

    while(true){
        ++y;
        if(distinct(y)){
            cout << y;
            break;
        }
    }
    return 0;
}