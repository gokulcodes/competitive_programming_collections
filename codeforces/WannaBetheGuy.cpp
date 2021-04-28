#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int el_x, el_y;
    string result = "I become the guy.";

    vector<int> comp;
    for(auto i = 1; i <= n; i++){
        comp.push_back(i);
    }

    cin >> el_x;
    vector<int> v_x;
    if(el_x != 0){
        while(el_x--){
            int el;
            cin >> el;
            v_x.push_back(el);
        }
    }

    cin >> el_y;

    if(el_x == 0 && el_y == 0){
        cout << "Oh, my keyboard!" << '\n';
        return 0;
    }

    while(el_y--){
        int el;
        cin >> el;
        v_x.push_back(el);
    }

    
    sort(v_x.begin(), v_x.end());
    std::unique(v_x.begin(), v_x.end());


    for(auto i = 0; i < (int)comp.size(); i++){
        if(v_x[i] != comp[i]){
            result = "Oh, my keyboard!";
            break;
        }
    }

    cout << result << '\n';

    return 0;
}