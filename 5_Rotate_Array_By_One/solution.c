#include <stdio.h>

void shift(int arr[], int n){
	int temp = arr[n - 1];
	for (int i = n - 1; i >= 0; i--){
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}

int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	shift(arr, n);
	printf("Result: ");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}