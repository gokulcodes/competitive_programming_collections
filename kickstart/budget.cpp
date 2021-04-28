#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    for(int i = 1; i <= ts; i++){
        int n, b, house = 0, sum = 0;
        cin >> n >> b;
        vector<int> vt;

        for(int j = 0; j < n; j++){
            int el;
            cin >> el;
            vt.push_back(el);
        }
        
        sort(vt.begin(), vt.end());
        for(int k = 0; k < n; k++){

            if(sum < b && sum + vt[k] <= b){
                sum = sum + vt[k];
                house++;
            }

        }

        cout << "Case #" << i << ": " << house << '\n';
    }
    
    return 0;
}
