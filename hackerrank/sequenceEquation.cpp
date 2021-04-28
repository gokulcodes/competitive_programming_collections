#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n+1);
    for(int i = 1; i <= n; i++){
        int el;
        cin >> el;
        p[i] = el;
    }

    vector<int> y(n+1);
    for(auto i = 1; i <= (int)p.size(); i++)
    {
        for(auto x = 1; x < (int)p.size(); x++){
            if(i == p[p[x]]){
                y[i] = x;
                break;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << y[i] << endl;
    }

    return 0;
}