#include <bits/stdc++.h>

using namespace std;

int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);	
	// freopen("output.txt", "w", stdout);
	// #endif

	int n;
	cin >> n;

	int subarray[n];
	for(int i = 0; i < n; i++){
		int el;
		cin >> el;
		subarray[i] = el;
	}

	cout << "FIRST: " <<  subarray[0] << '\n';

	int best = 0, sum = 0;
	
	for(int i = 0; i < n; i++){
		sum = max(subarray[i], sum+subarray[i]);
		best = max(sum, best);
	}

	cout << best << '\n';

	return 0;
}