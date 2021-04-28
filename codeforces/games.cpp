#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<int, pair<int, int>> d;
    int i = 0;
    while(n--){
        int h, a;
        cin >> h >> a;
        pair<int, int> p = make_pair(h, a);
        d.insert({i++, p});
    }

    int changes = 0;
    for(auto i = d.begin(); i != d.end(); i++){
        for(auto j = d.begin(); j != d.end(); j++){
            if(i != j){
                if(i->second.first == j->second.second){
                    changes++;
                }
            }
        }
    }

    cout << changes << '\n';

    return 0;
}