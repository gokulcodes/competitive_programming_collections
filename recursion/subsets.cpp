#include <bits/stdc++.h>

using namespace std;

vector<int> fresh;

int n = 3;

void search(int k){
    if(k == n+1)
        return;
    fresh.push_back(k);
    for(int el : fresh){
        cout << el << " ";
    }
    cout << endl;
    search(k+1);
    fresh.pop_back();
    // cout << k << endl;
    search(k+1);
}

int main(){
    search(1);
    return 0;
}