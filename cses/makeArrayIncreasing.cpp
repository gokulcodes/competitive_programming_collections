#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    int count = 0;
    cin >> n;
    vector<int> vt;
    while(n--){
        ll el;
        cin >> el;
        vt.push_back(el);
    }
    ll prev = vt[0];
    for(vector<int>::size_type i = 1; i < vt.size(); i++){
        if(prev >= vt[i]){
            vt[i]++;
            count++;
            i--;
        }else{
            prev = vt[i];
        }
    }
    for(int el : vt){
        cout << el << endl;
    }
    cout << "COUNT: " << count << endl;

    return 0;
}
//15 14 7