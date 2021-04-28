#include <bits/stdc++.h>

using namespace std;

void serviceLane(int n, vector<vector<int> > cases, vector<int> width){
    vector<int> pos;
    for(auto i =0; i < cases.size(); i++){
        // int min_el = *min_element(width.begin()+cases[i][i], width.begin()+cases[i][i+1]);
        // cout << min_el << endl;
    }
}

int main(){
    int w, ts;
    vector<int> width(w+1);
    cin >> w >> ts;
    for(int i = 0; i < w; i++){
        int el;
        cin >> el;
        cout << el;
    }
    vector<vector<int>> cases;
    for(int i = 0; i < ts; i++){
        for(int j = 0; j < 2; j++){
            cin >> cases[i][j];
        }
    }
    serviceLane(w, cases, width);
    return 0;
}