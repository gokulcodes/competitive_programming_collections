#include <bits/stdc++.h>

using namespace std;

int main(){
    float a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << setprecision(12) << fixed;

    cout << (a/b) / (1 - (1 - a/b) * (1 - c/d)) << '\n';

    return 0;
}