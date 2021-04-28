#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n*(n+1)/2%2){
        cout<< "NO";
        return 0;
    }

    int first_s = n / 2;
    int second_s = n - first_s;

    int sum1 = 0, sum2 = 0;

    int arr1[first_s], arr2[second_s];

    for(int i = 1; i <= first_s; i++){
        arr1[i] = i;
        sum1 = sum1 + i;
    }

    for(int i = first_s+1; i <= n; i++){
        arr2[i] = i;
        sum2 = sum2 + i;
    }
    // cout << sum1 << " " << sum2 << endl;
    if(sum1 == sum2){
        cout << "YES";
        for(int i = 1; i <= first_s; i++){
            cout << arr1[i] << " ";
        }
        for(int i = first_s+1; i <= n; i++){
            cout << arr2[i] << " ";
        }   
    } else{
        cout << "NO";
    } 

    return 0;
}