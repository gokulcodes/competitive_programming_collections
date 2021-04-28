#include<bits/stdc++.h>

using namespace std;

bool isPrime (int n){
    if (n<=1) 
        return false;
    if (n==2) 
        return true;
    if (n%2==0) 
        return false;
    int m=sqrt(n);
    cout << m << endl;
    for (int i=3; i<= m; i+=2)
        if (n%i==0)
            return false;

    return true;
}

vector<bool> seive(int n){
    vector<bool> prime(n+1);
    prime[0] = false;
    prime[1] = false;
    for(auto i = 0; i < prime.size(); i++){
        prime[i] = true;
    }
    int m = sqrt(n);
    for(int i = 2; i <= m; i++){
        if(prime[i]){
            for(int k = i * i; k <= n; k+=i){
                prime[k] = false;
            }
        }
    }
    return prime;
}

int simpleGcd(int a, int b){
    for(int i = min(a, b); i >= 1; i--){
        if((a%i== 0) && (b%i == 0))
            return i;
    }
    return 0;
}

int recursiveGcd(int a, int b){
    if(b == 0) return a;
    return recursiveGcd(b, a%b);
}

int main(){
    int n;
    // cin >> n;
    // cout << isPrime(n) << endl;
    // vector<bool> prime = seive(n);
    // for(auto i = 0; i < prime.size(); i++){
    //     if(prime[i]){
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;
    int a, b;
    cin >> a >> b;
    cout << "INBUILD: " << __gcd(a, b) << endl;

    int gcd = simpleGcd(a, b);
    int lcm = a*b/recursiveGcd(a, b);
    cout << "MUL: " << gcd*lcm << endl;

    return 0;
}