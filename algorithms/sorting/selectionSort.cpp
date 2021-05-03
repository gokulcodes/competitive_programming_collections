#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n){

	for(int i = 0; i < n; i++){
		int mn = i;	// initialize index of i as min for every iteration

		for(int j = i; j < n; j++){
			if(arr[mn] > arr[j]){
				mn = j; // change mn index to next lowest value
			}
		}
		
		swap(arr[mn], arr[i]); // swap mn with i'th index
	}

}

int main(){
	int arr[] = {2, 3, 1, 5, 7, 8, 12, 10, 4, 9};
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);

	for(int i = 0; i < n; i++) cout << arr[i] << " ";

	return 0;
}