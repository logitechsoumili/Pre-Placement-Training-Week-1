#include <stdio.h>

int main(){
	int n, num;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int arr[n + 1];
	
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter element to be inserted: ");
	scanf("%d", &num);

	printf("Array before insertion: ");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	arr[n] = num;

	printf("Array after insertion: ");
	for (int i = 0; i <= n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
