#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> students;

    while(n--){
        string el;
        cin >> el;
        students.push_back(el);
    }

    sort(students.begin(), students.end());

    for(string el : students) cout << el << ' ';

    return 0;
}