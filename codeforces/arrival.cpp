#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> sl;
	while(n--){
		int el;
		cin >> el;
		sl.push_back(el);
	}
	
	auto max_el = INT_MIN, mxi = 0;
	for(auto i = 0; i < (int)sl.size(); i++){
		if(max_el < sl[i]){
			max_el = sl[i];
			mxi = i;
		}
	}
	
	auto min_el = INT_MAX, mni=0;
	for(auto i = 0; i < (int)sl.size(); i++){
		if(min_el >= sl[i]){
			min_el = sl[i];
			mni = i;
		}
	}
	int s = (int)sl.size() -1;
	if(sl[0] == max_el && sl[s] == min_el) {
		cout << 0 << " ";
		return 0;
	}
	
	if(mni < mxi) mni++;
	
	cout << max_el << " " << mxi << " " << min_el << " " << sl.size();
	
	int re = mxi + sl.size()-1 - mni;
	cout << re << '\n';
}
