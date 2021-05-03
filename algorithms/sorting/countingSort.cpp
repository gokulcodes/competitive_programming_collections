#include <bits/stdc++.h>

using namespace std;

void countingSort(int arr[], int n, int mx){
	int aux[mx+1], output[n];

	fill(aux, aux + mx+1, 0);

	for(int i = 0; i < n; i++)
		aux[arr[i]]++;

	for(int i = 1; i <= mx; i++)
		aux[i] += aux[i-1];


	for(int i = n-1; i >= 0; i--){
		output[aux[arr[i]]-1] = arr[i];
		aux[arr[i]]--;
	}
	
	for(int i = 0; i < n; i++)
		arr[i] = output[i];
	
}

int main(){
	int arr[] = {2, 3, 1, 5, 7, 8, 12, 10, 4, 9, 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	
	countingSort(arr, n, 12);

	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}