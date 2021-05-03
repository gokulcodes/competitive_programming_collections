#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n){

	for(int i = 1; i < n; i++){
		int j = i - 1; // zero index
		int key = arr[i]; // first index

		while(arr[j] > key && j >= 0){
			arr[j + 1] = arr[j]; // shift elements to 1 position right
			--j;
		}

		arr[j+1] = key;

	}
}


int main(){
	int arr[] = {2, 3, 1, 5, 7, 8, 12, 10, 4, 9};

	int n = sizeof(arr)/sizeof(arr[0]);

	insertionSort(arr, n);

	for(int i = 0; i < n; i++) cout << arr[i] << " ";


	return 0;
}
