#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    int m = min(a, b);
    int ma = (max(a, b) - m)/2;
    cout << m << " " << ma << '\n';


    return 0;
}