#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(vector<int> arr, int ans){
    for(vector<int>::size_type i = 1; i < arr.size(); i++){
        ans = (ans * arr[i]) / gcd(ans, arr[i]);
    }
    return ans;
}

int getTotalX(vector<int> a, vector<int> b) {
    int count = 0;
    int  gcd2, lcm1 = 0;
    if(a.size() > 1){
        lcm1 = lcm(a, a[0]);
    }else{
        lcm1 = a[0];
    }
    if(b.size() > 1){
        for(int i = 0; i < b.size(); i++){
            gcd2 = gcd(b[i], b[i+1]);
        }
    }else{
        gcd2 = b[0];
    }
    
    for(int i = 1; i < gcd2; i++){
        lcm1 = lcm1 * i;
        if(gcd2%lcm1 == 0 && lcm1 != gcd2){
            cout << "LCM " << lcm1 << " GCD " << gcd2 << endl;
            count++;
        }else{
            break;
        }
    }
    return count;
}

int main(){
    vector<int> a = {2}, b = {20, 30, 12};
    cout << getTotalX(a, b) << endl;
    return 0;
}