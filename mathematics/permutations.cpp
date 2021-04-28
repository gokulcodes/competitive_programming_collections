#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';
}

void hashPermutate(int arr[], int size, int n){
    if(size == 1){
        printArr(arr, n);
        return;
    }
    
    for(int i = 0; i < size; i++){
        hashPermutate(arr, size-1, n);
        if(size%2 == 0){
            swap(arr[i], arr[size-1]);
        }else{
            swap(arr[0], arr[size-1]);
        }
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    hashPermutate(arr, n, n);
    return 0;
}