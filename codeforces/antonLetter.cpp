#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	set<int> c;
	getline(cin, s);

	if(s == "{}"){
		cout << 0 << '\n';
		return 0;
	}

	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	s.erase(remove(s.begin(), s.end(), ','), s.end());
	s.erase(remove(s.begin(), s.end(), '{'), s.end());
	s.pop_back();

	int n = s.length();
	for(int i = 0; i < n; i++){
		c.insert(s[i]);
	}

	cout << c.size() << '\n';
}
