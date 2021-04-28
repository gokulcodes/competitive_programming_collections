#include <bits/stdc++.h>


using namespace std;


int main(){
    int n, k, count=0;
    cin >> n >> k;
    k = k - 1;
    vector<int> vt;
    while(n--){
        int el;
        cin >> el;
        vt.push_back(el);
    }
    
    for(int el : vt){
        if(el >= vt[k] && el > 0){
            count++;
        }
    }
    if(count <= 0){
        cout << 0 << '\n';
    }else{
        cout << count << '\n';
    }

    return 0;
}