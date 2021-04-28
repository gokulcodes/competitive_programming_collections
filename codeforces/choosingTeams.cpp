#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> teams(n, 0);
    for(int &el : teams) cin >> el;

    sort(teams.begin(), teams.end());

    int no_of_teams = 0;

    for(int i = 2; i < teams.size(); i+=3){
        if(abs(teams[i]-5) >= k){
            no_of_teams++;
        }
    }

    cout << no_of_teams << '\n';

    return 0;
}