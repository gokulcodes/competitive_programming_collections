#include <bits/stdc++.h>
#include <set>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int n;
    queue<int> q;
    q.push(20);
    vector<int> count(256);
    set<char> s;
    string name, distinct;
    cin >> name;
    n = name.length();
    for(int i = 0; i < n; i++){
        s.insert(name[i]);
    }
    for(auto it = s.begin(); it != s.end(); it++){
        distinct = distinct + *it;
    }
    if(distinct.length() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}