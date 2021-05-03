#include <bits/stdc++.h>

using namespace std;

#define d 10

void robinKarp(string s, string p, int prime){
	int n = s.length();
	int m = p.length();

	int h = pow(d, m-1);
	h %= prime;
	
	int sh = 0;
	int ph = 0;

	for(int k = 0; k < m; k++){
		ph = (d*ph+p[k])%prime;
		sh = (d*sh+s[k])%prime;
	}

	cout << h << " " << ph << " " << sh << endl;
	int i, j;
	for(i = 0; i <= n-m; i++){
		if(sh == ph){

			for(j = 0; j < m; j++)
				if(s[i+j] != p[j]) break;
			
			if(j == m) cout << "Pattern found at " << i+1 << "th Position" << endl;

		}

		if(i < n-m){
			sh = (d*(sh - s[i]*h) + s[i+m])%prime;
			if(sh<0) sh += prime;
		}

	}

}

int main(){
	string s = "GOKUL", p = "UL";
	// cin >> s >> p;
	int prime = 7;

	robinKarp(s, p, prime);

	return 0;
}