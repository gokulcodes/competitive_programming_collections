#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, search;
	cin >> n >> search;

	vector<int> v;
	for(int i = 1; i <= n; i++) v.push_back(i);

	int low = 0, high = n-1;

	while(low <= high){
		int mid = low+(high-low)/2;
		if(v[mid] == search) {
			cout << "Found at:" <<  mid+1 << endl;
			return 0;
		}
		if(v[mid] > search) high = mid-1;
		else low = mid+1;
	}

	cout << "Not Found!" << endl;

	return 0;
}