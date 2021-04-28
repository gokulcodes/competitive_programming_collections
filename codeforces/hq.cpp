#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string result = "NO";
    for(char el : s){
        if(el == 'H'){
            result = "YES";
            break;
        }else if(el == 'Q'){
            result = "YES";
            break;
        }else if(el == '9'){
            result = "YES";
            break;
        }
    }

    cout << result << '\n';


    return 0;
}