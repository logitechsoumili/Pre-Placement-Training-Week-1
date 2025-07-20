# Problem 4: Move all zeros to end

**Problem Link:**  
https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

## Problem Statement
You are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.

### Constraints
- 1 ≤ arr.size() ≤ 10^5
- 0 ≤ arr[i] ≤ 10^5

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
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
arr = list(map(int, input("Enter array elements: ").split()))
pos = 0
for i in range(len(arr)):
	if arr[i] != 0:
		arr[pos], arr[i] = arr[i], arr[pos]
		pos += 1
print(arr)
```