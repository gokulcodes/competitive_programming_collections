#include <bits/stdc++.h>

using namespace std;

string hackerRank(string s){
    string original = "hackerrank";
    string out = "";
    int j = 0;
    for(int i = 0; i < s.length(); i++){
        if(j < original.length() && s[i] == original[j]){
            j++;
        }
    }
    if(j ==  original.length()){
        out = "YES";
    }else{
        out = "NO";
    }
    return out;
}


int main(){
    string s = "hhaacckkekraraannk";
    cout << hackerRank(s) << endl;
    return 0;
}