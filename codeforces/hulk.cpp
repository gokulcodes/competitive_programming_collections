#include <bits/stdc++.h>


using namespace std;

int main(){
    int n;
    cin >> n;
    string result = "";

    for(int i = 1; i <= n; i++){
        if(i == n && i%2){
           result.append("I hate ");    
           break;
        }else if(i == n && i%2 == 0) {
           result.append("I love ");    
           break;
        }
        if(i%2){
           result.append("I hate that ");    
        }else{
           result.append("I love that ");    
        }
    }
    result.append("it ");

    cout << result << '\n';
    return 0;
}