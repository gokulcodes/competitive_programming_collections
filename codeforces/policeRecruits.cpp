#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    while(n--){
        int el;
        cin >> el;
        arr.push_back(el);
    }

    int crimes = 0, police = 0;

    for(int i = 0; i < (int)arr.size(); i++){
        if(police == 0 && arr[i] == -1){
            crimes++;
        }
        if(arr[i] >= 1){
            police += arr[i];
        }else if(arr[i] == -1 && police != 0){
            police--;
        }

    }

    cout << abs(crimes) << '\n';

    return 0;
}