#include <bits/stdc++.h>

using namespace std;

int friends(int n){
    if(n == 1 or n == 2) return n;
    cout << "INITIAL: " << n << endl;
    int item1 = friends(n-1);
    cout << "ITEM_1: " << item1 << endl;
    cout << "NEXT: " << n << endl;
    int item2 = (n-1)*friends(n-2);
    cout << "ITEM_2: " << item2 << endl;
    cout << "FINAL: " << n << endl;
    return item1 + item2;
}

int main(){
    cout << friends(4) << endl;
    return 0;
}