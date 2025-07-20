#include <stdio.h>
#include <stdbool.h>

void isSorted(int arr[], int n){
	for (int i = 0; i < n - 1; i++){
		if (arr[i] > arr[i + 1]){
			printf("false\n");
			return;
		}
	}
	printf("true\n");
	return;
}

int main(){
	int n;
	printf("Enter number of array elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	isSorted(arr, n);
	return 0;
}