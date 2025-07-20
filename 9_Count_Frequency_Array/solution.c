#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int *res = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++){
		res[arr[i] - 1] += 1;
	}

	printf("Result: ");
	for (int i = 0; i < n; i++){
		printf("%d ", res[i]);
	}

	return 0;
}