#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n){
	int swapped = 0; 

	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; j++){

			if(arr[i] < arr[j]){
				swap(arr[j], arr[i]);			
				swapped = 1; // if array is already sorted set swapped to 1
			}
			
		}

		// array already sorted break 
		if(!swapped) break;
	}


		

}

int main(){
	int arr[] = {2, 3, 1, 5, 7, 8, 12, 10, 4, 9};
	int n = sizeof(arr) / sizeof(arr[0]);

	
	bubbleSort(arr, n);

	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}