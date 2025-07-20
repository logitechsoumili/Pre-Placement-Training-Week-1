# Problem 6: Check if array is sorted

**Problem Link:**  
https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

## Problem Statement
Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

### Constraints
- 1 ≤ arr.size ≤ 10^6
- 10^9 ≤ arr[i] ≤ 10^9

---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
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
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
def isSorted(arr):
	for i in range(len(arr) - 1):
		if arr[i] > arr[i + 1]:
			return False
	return True

arr = list(map(int, input("Enter array elements: ").split()))
print(isSorted(arr))
```