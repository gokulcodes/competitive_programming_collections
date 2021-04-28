#include <bits/stdc++.h>

using namespace std;

// 0 100/4 100/2 100/5

int main(){
    double n;
    cin >> n;
    double total = 0;
    double div = n;
    while(n--){
        double el;
        cin >> el;
        total += el;
    }
    double result = total/div;
    cout << result << endl;


    return 0;
}