// AUTHOR: GOKULVARADAN
// CREATED AT: 20/05/2022 5:30PM
// ABOUT: COMPETITIVE PROGRAMMING TEMPLATE

#include <bits/stdc++.h>
#include <functional>

using namespace std;

typedef long long LL;
#define br '\n'

#define mem(a, b) memset(a, b, sizeof(a))
#define rep(i, j, range, inc) for(int i = j; i < range; i+=inc)
#define rrep(i, j, range, inc) for(int i = j; i >= range; i-=inc)
#define all(a) a.begin(), a.end()
#define read(v) for(auto &el : v) cin >> el;
#define rall(a) a.end(), a.begin()
#define itr(it, i, j) for(auto it = i; it != j; it++)
#define print(a) cout << (a) << br
#define show(a, b) for(auto it = a; it != b; it++) cout << *it << " ";
#define printd(a,b) cout << a << " " << b << '\n'
#define printt(a,b,c) cout << a << " " << b << " " << c << '\n'
#define debl(arr, start) rep(i, start, (int)arr.size(), 1) cout << arr[i] << (arr.size() - 1 == i ? '\n' : ' ');
#define deb(name, a) cout << name << " " << a << br;
#define mp make_pair
#define pb push_back
#define f first
#define s second
LL MOD = 1e9+7;

typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<LL> vl;
typedef vector<vl> vll;
typedef vector<string> vs;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef map<int, int> mii;
typedef map<LL, LL> mll;
typedef set<int> si;
typedef set<LL> sl;
typedef multiset<int> msi;
typedef multiset<LL> msl;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;


vi isPrime(20, 1);
void seive(int range){

	isPrime[0] = isPrime[1] = 0;

		for(int i = 2; i*i <= range; i++)
		if(isPrime[i])
			for(int j = i*i; j <= range; j+=i)
				isPrime[j] = i;
}

LL mod_expo(LL n, LL exp, LL p = MOD){
	LL res = 1;

	while(exp>0){
		if(exp&1) {res = ((res%p) * (n%p)) % p; exp--;};
		n = ((n%p) * (n%p)) % p;
		exp>>=1;
	}

	return res;
}

int checkPrime(int n){
	
	if(n == 1 or n == 0) return -1;
	
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return -1;
		}
	}
	return 1;
}	

// ================================================ //

void solve(){
	vi v = {1, 2, 3, 4};
	debl(v, 3);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int ts = 1;
	// cin >> ts;

	std::chrono::time_point<std::chrono::system_clock> start, end;

	start = std::chrono::system_clock::now();

	while(ts--){
		solve();
	}

	end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;

	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	// cout << "Duration: " << elapsed_seconds.count() << "s\n";

	return 0;
}
