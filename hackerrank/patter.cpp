#include <iostream>

using namespace std;

int marsExploration(string s) {
    // int pattern = s.length()/3;
    string original = "SOS";
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        int k = 0;
        for(int j = i; j < i+3; j++){
            if(s[j] != original[k]){
                cout << s[j] << " " << original[k] << endl;
                count++;
            }
            k++;
        }
        i = i + 2;
    }
    return count;
}

int main(){
    string s = "SOSSPSSQSSOR";
    cout << marsExploration(s) << endl;
    return 0;
}