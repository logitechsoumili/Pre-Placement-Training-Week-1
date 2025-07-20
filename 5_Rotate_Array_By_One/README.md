# Problem 5: Rotate array by one

**Problem Link:**  
https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

## Problem Statement
Given an array arr, rotate the array by one position in clockwise direction.

### Constraints
- 1<=arr.size()<=10^5
- 0<=arr[i]<=10^5

---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
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
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
def shift(arr):
	temp = arr[-1]
	for j in range(len(arr) - 1, -1, -1):
		arr[j] = arr[j - 1]
	arr[0] = temp
	print(arr)
arr = list(map(int, input("Enter array elements: ").split()))
shift(arr)
```