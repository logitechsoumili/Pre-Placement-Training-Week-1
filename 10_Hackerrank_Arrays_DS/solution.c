#include <stdio.h>

int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int rev[n];
	for (int i = 0; i < n; i++){
		rev[i] = arr[n - 1 - i];
	}

	printf("Reversed array: ");
	for (int i = 0; i < n; i++){
		printf("%d ", rev[i]);
	}

	return 0;
}