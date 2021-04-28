#include <bits/stdc++.h>

using namespace std;

void oddPermutation(int n){
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    swap(arr[0], arr[1]);

    if(n == 3){
        for(int i = 2; i < n; i++){
            swap(arr[i], arr[i-1]);
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << ' ';
        }    
        cout << '\n';
        return;
    }
    for(int i = 3; i < n; i++){
        swap(arr[i], arr[i-1]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';

}

int main(){
    int ts;
    cin >> ts;
    while(ts--){
        int n;
        cin >> n;
        if(n%2 == 0) {
            for(int i = 1; i <= n/2; i++){
                cout << 2*i << " " << 2*i -1 << " ";
            }
            cout << '\n';
            continue;
        }
        oddPermutation(n);
    }

    return 0;
}