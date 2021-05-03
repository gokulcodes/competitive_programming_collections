#include <bits/stdc++.h>

using namespace std;

void merger(int arr[], int start, int mid, int end){
	int n1 = mid - start + 1;
	int n2 = end - mid;

	int l[n1], m[n2];

	for(int i = 0; i < n1; i++)
		l[i] = arr[start + i];

	for(int j = 0; j < n2; j++)
		m[j] = arr[mid + j + 1];

	int i, j, k;
	i = 0, j = 0, k = start;


	while(i < n1 && j < n2){
		if(l[i] <= m[j]) {
			arr[k] = l[i];
			i++;
		}else{
			arr[k] = m[j];
			j++;
		}
		k++;
	}

	while(i < n1){
		arr[k] = l[i];
		i++;
		k++;
	}

	while(j < n2){
		arr[k] = m[j];
		j++;
		k++;
	}

}


void mergeSort(int arr[], int start, int end){
	if(start < end) {
		int mid = start + (end-start) / 2;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);
		merger(arr, start, mid, end);

	}
}

int main(){
	int arr[] = {2, 3, 1, 5, 7, 8, 12, 10, 4, 9};
	int n = sizeof(arr) / sizeof(arr[0]);

	
	mergeSort(arr, 0, n-1);

	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}