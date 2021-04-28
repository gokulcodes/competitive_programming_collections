#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
#define br '\n'

#define mem(a, b) memset(a, b, sizeof(a))
#define REP(i, j, range, inc) for(int i = j; i < range; i+=inc)
#define RREP(i, j, range, inc) for(int i = j; i >= range; i-=inc)
#define all(a) a.begin(), a.end()
#define rall(a) a.end(), a.begin()
#define ITR(it, i, j) for(auto it = i; it != j; it++)
#define print(a) cout << a << '\n'
#define printd(a,b) cout << a << " " << b << '\n'
#define printt(a,b,c) cout << a << " " << b << " " << c << '\n'
#define debl(arr) REP(i, 0, (int)arr.size(), 1) cout << arr[i] << ' ';
#define deb(name, a) cout << name << " " << a << br;
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define MOD 1000000007

typedef pair<int, int> PI;
typedef pair<LL, LL> PLL;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<LL> VL;
typedef vector<VL> VLL;
typedef vector<string> VS;
typedef vector<PI> VPI;
typedef vector<PLL> VPL;
typedef map<int, int> MII;
typedef map<LL, LL> MLL;
typedef set<int> SI;
typedef set<LL> SL;
typedef multiset<int> MSETI;
typedef multiset<LL> MSETL;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;


VI isPrime(1e6, 1);
void seive(int range){

	isPrime[0] = isPrime[1] = 0;

	for(int i = 2; i*i <= range; i++)
		if(isPrime[i])
			for(int j = i*i; j <= range; j+=i)
				isPrime[j] = 0;
}

uint64 mod_expo(uint64 n, uint64 exp, LL p = MOD){
	uint64 res = 1;

	while(exp>0){
		if(exp&1) {res = ((res%p) * (n%p)) % p; exp--;};
		n = ((n%p) * (n%p)) % p;
		exp>>=1;
	}

	return res;
}

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

//==========================================//

void solve(){	
	int n, m;
	cin >> n >> m;

	VI v(n);

	for(auto &el : v) cin >> el;

	sort(all(v));
	int sum = 0;

	REP(i, 0, m, 1){
		if(v[i] >= 0) break;
		else sum += abs(v[i]);
	}
	print(sum);
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// int ts;
	// cin >> ts;

	std::chrono::time_point<std::chrono::system_clock> start, end;

	start = std::chrono::system_clock::now();

	// while(ts--){
		solve();
	// }

	end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;

	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	// cout << "Duration: " << elapsed_seconds.count() << "s\n";

	return 0;
}
