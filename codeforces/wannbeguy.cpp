#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<string> arr;
    while(n--){
        string s;
        cin >> s;
        if(s.length() > 10){
            cout << s.front() << s.length()-2 << s.back() << endl;
        }else{
            cout << s << endl;
        }
    }
    
    return 0;
}