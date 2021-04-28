#include <bits/stdc++.h>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vt = {1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4};
    map<int, int> m;
    sort(vt.begin(), vt.end());
    pair<int, int> max_el = make_pair(1, 1);
    pair<int, int> p, q;

    for(vector<int>::size_type i = 0; i < vt.size();i++){
        auto initial = lower_bound(vt.begin(), vt.end(), vt[i]);
        auto ender = upper_bound(vt.begin(), vt.end(), vt[i]);
        int count = ender-initial;
        m.insert({vt[i], count});
    }

    int key = 0;
    for(const auto &el : m){  
        if(max_el.second <= el.second){
            p = make_pair(max_el.first, max_el.second);
            max_el.first = el.first;
            max_el.second = el.second;
            q = make_pair(max_el.first, max_el.second);
        }
    }
    cout << p.first << " " << p.second << " " << q.first << " " << q.second << endl;
    if(p.second == q.second){
        if(p.first < q.first){
            key = p.first;
        }
    }else{
        key = q.first;
    }
    cout << key << endl;
    return key;
}