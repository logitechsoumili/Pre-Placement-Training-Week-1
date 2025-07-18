# Problem 2: Find largest element in array

**Problem Link:**  
https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

## Problem Statement
Given an array arr[]. The task is to find the largest element and return it.

### Constraints
- 1 <= arr.size()<= 10^6
- 0 <= arr[i] <= 10^6

---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
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

	int max = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}

	printf("Largest element: %d\n", max);

	return 0;
}
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
arr = list(map(int, input("Enter array elements: ").split()))
print("Largest element:", max(arr))
```