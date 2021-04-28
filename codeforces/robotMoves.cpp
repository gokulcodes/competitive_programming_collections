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
#define debl(d, el, a) FOR(d, el, a.size()) cout << a[i] << '\n';
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
#define sortall(x) sort(x.begin(), x.end())
#define itr(x) for(auto it = x.begin(); it != x.end(); it++)
#define ritr(x) for(auto it = x.rbegin(); it != x.rend(); it++)

const LL mod = 1000000007;

void solve(){
    int N, M;
    cin >> N >> M;
    if(N!=M){
        cout << 2*max(N, M)-1 << '\n';
    }else{
        cout << N+M << '\n';
    }
}

int main(void){
    ios::sync_with_stdio(NULL);
    cout << setprecision(12) << fixed;
    cin.tie(0);
    cout.tie(0);

    int ts;
    cin >> ts;

    while(ts--){
        solve();
    }


    return 0;
}