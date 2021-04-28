#include <bits/stdc++.h>

using namespace std;

void laddu(){
    int activities=0;
    string origin="";
    int contest=0, contribute=0, bug=0, hosted = 0;
    cin >> activities >> origin;    
    while(activities--){
        string key = "";
        int value = 0;
        cin >> key;
        if(key == "CONTEST_WON"){
            cin >> value;
            if(value <= 20){
                contest = (300 + 20) - value;
            }
        }else if(key == "TOP_CONTRIBUTOR"){
            contribute = 300;
        }else if(key == "BUG_FOUND"){
            cin >> value;
            bug = value;
        }else if(key == "CONTEST_HOSTED"){
            hosted = 50;
        }
    }
    int result = 0;
    result = contest + contribute + bug + hosted;
    if(origin == "INDIAN"){
        result = result / 200;
        cout << result << endl;
    }else{
        result = result / 400;
        cout << result << endl;
    }
}

int main(){
    int ts;
    cin >> ts;
    while(ts--){
        laddu();
    }

    return 0;
}