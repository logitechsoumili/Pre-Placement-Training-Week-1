# Problem 1: Insert an element at end of array

**Problem Link:**  
https://www.geeksforgeeks.org/dsa/insert-element-at-the-end-of-an-array/

## Problem Statement
Given an array of integers, the task is to insert an element at the end of the array.

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 0 ≤ element, arr[i] ≤ 10^6

---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
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
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
arr = list(map(int, input("Enter array elements: ").split()))
val = int(input("Enter value to be inserted: "))
print("Array before insertion: ", arr)
arr.append(val)
print("Array after insertion: ", arr)
```
