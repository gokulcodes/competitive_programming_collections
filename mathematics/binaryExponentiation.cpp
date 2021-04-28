#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define si(x) scanf("%d", &x);
#define sl(x) scanf("%lld", &x);
#define ss(x) scanf("%s", &x);
#define sc(x) scanf("%c", &x);
#define pi(x) printf("%d\n", x);
#define ps(x) printf("%s\n", x);
#define pc(x) printf("%c\n", x);
#define br printf("\n");

#define FOR(d, s, n) for(d i = s; i < n; i++)
#define fo(d, k, n) for(d i = k; k < n ? i < n : i >= n; k < n ? i++ : i--)
#define deb(x) cout << "#X" << " " << x << '\n';
#define deb2(x, y) cout << "#X" << " " << x << " " << "#Y" << " " << y << '\n';
#define debl(d, el, a) FOR(d, el, a.size()) cout << a[i] << ' ';
#define in(d, a) for(d &el : a) cin >> el;


typedef pair<int, int> pii;
typedef pair<LL, LL> pl;
typedef vector<LL> vl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef map<int, int> mi;
typedef map<LL, LL> ml;
typedef map<string, string> ms;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(x.begin(), x.end());
#define itr(x) for(auto it = x.begin(); it != x.end(); it++)
#define ritr(x) for(auto it = x.rbegin(); it != x.rend(); it++)

const LL mod = 1000000007;

int recursivePower(int x, int n){
    if(n==0)
        return 1;
    return x*recursivePower(x, n-1);
}

int binaryExponentiation(int x, int n){
    if(n==0)
        return 1;
    else if(n%2 == 0) 
        return binaryExponentiation(x*x, n/2);
    else
        return x*binaryExponentiation(x*x, (n-1)/2);
}

int modularExponentiation(int x, int n, int M){
    if(n==0)
        return 1;
    else if(n%2 == 0) 
        return modularExponentiation((x*x)%M, n/2, M);
    else
        return (x*modularExponentiation((x*x)%M, (n-1)/2, M))%M;
}

int euclidGcd(int a, int b){
    if(b==0)
        return a;
    return euclidGcd(b, a%b);
}

int d, X, y;
void extendedGcd(int a, int b){
    if(b == 0){
        d = a;
        X = 1;
        y = 0;
        return;
    }
    extendedGcd(b, a%b);
    int temp = X;
    X = y;
    y = temp-(a/b)*y;
}


int main(void){
    ios::sync_with_stdio(NULL);
    cout << setprecision(12) << fixed;
    cin.tie(0);
    cout.tie(0);

    int x, n;
    cin >> x >> n;
    cout << binaryExponentiation(x, n) << '\n';
    cout << recursivePower(x, n) << '\n';
    cout << modularExponentiation(x, n, mod) << '\n';
    cout << euclidGcd(x, n) << '\n';
    extendedGcd(x, n);
    cout << d << " " << X << " " << y << '\n';
    return 0;
}