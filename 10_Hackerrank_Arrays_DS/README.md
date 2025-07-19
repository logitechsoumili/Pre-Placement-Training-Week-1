# Problem 10: Arrays - DS

**Problem Link:**  
https://www.hackerrank.com/challenges/arrays-ds/problem

## Problem Statement
Reverse an array of integers.

### Constraints
- 1 ≤ N ≤ 10³
- 1 ≤ A[i] ≤ 10⁴, where A[i] is the i-th integer in A

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
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
arr = list(map(int, input("Enter array elements: ").split()))
print(arr[::-1])
```