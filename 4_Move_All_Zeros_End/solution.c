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

	int pos = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] != 0){
			int temp = arr[pos];
			arr[pos] = arr[i];
			arr[i] = temp;
			pos++;
		}
	}

	printf("Result: ");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}