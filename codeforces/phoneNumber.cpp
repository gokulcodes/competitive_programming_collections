#include <bits/stdc++.h>

using namespace std;

#define ll long long
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
#define in(d, el, a) FOR(d, el, a.size()) cin >> a[i];


typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef map<int, int> mi;
typedef map<ll, ll> ml;
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

const ll mod = 1000000007;

void solve(int n){
    string s;
    cin >> s;
    int result = 0;
    int len = s.length()/11;
    sortall(s)

    auto it = lower_bound(s.begin(), s.end(), '8');
    auto it1 = upper_bound(s.begin(), s.end(), '8');

    result = min((int)(it1-it), len);

    pi(result);
}

int main(){
    ios::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    solve(n);
    return 0;
}