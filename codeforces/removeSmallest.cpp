#include <bits/stdc++.h>

using namespace std;

int main(){
    int ts;
    cin >> ts;
    while(ts--){
        int n;
        cin >> n;

        vector<int> arr;
        while(n--){
            int el;
            cin >> el;
            arr.emplace_back(el);
        }

        if(arr.size() == 1){
            cout << "YES" << '\n';
            continue;
        }
        sort(arr.begin(), arr.end());
        unique(arr.begin(), arr.end());
        int s = (int)arr.size();

        while(s--){
            if(arr.size() == 1){
                break;
            }
            if(abs(arr[1] - arr[0]) <= 1){
                int min_el = min(arr[0], arr[1]);
                remove(arr.begin(), arr.end(), min_el);
                arr.pop_back();
            }else{
                break;
            }
        }

        if((int)arr.size() == 1){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }

    }

    return 0;
}