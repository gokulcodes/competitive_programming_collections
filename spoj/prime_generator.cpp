// AUTHOR: GOKULVARADAN
// UPDATED ON: 22/12/2021 5:30PM
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
#define debl(arr) rep(i, 0, (int)arr.size(), 1) cout << arr[i] << " ";
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

vi primes;

void seive(int range){
	vector<bool> isPrime(range+1, true);
  	isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= range; i++){
    	if(isPrime[i]){
	    	primes.push_back(i);
	      	for(int j = i * i; j <= range; j += i)
	        	isPrime[j] = false;
	    }
    }

}

void segSieve(int l, int h){
	int limit = floor(sqrt(h));
	seive(limit);

	vector<bool> prime(h - l + 1, true);

	for(int p : primes){
		int sm = floor(l / p) * p;
		if(sm < l) sm += p;

		for(int m = sm; m <= h; m+=p){
			if(m != p)
				prime[m - l] = false;
		}
	}

	for(int i = l; i <= h; i++){
		if(prime[i - l] && i != 1){
			cout << i << '\n';
		}
	}
}

LL mod_expo(LL n, LL exp, LL p = MOD){
  LL res = 1;

  while(exp>0){
    if(exp&1) {
    	res = ((res%p) * (n%p)) % p; 
    	exp--;
    };
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
  int n, m;
  cin >> m >> n;

  segSieve(m, n);
  cout << br;
}

int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  int ts = 1;
  cin >> ts;

  std::chrono::time_point<std::chrono::system_clock> start, end;

  start = std::chrono::system_clock::now();

  // cout << setprecision(9) << fixed;

  while(ts--){
    solve();
  }

  end = std::chrono::system_clock::now();

  std::chrono::duration<double> elapsed_seconds = end - start;

  std::time_t end_time = std::chrono::system_clock::to_time_t(end);

  // cout << "Duration: " << elapsed_seconds.count() << "s\n";

  return 0;
}
