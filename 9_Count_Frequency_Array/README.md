# Problem 9: Count frequency of array elements

**Problem Link:**  
https://www.geeksforgeeks.org/problems/frequency-of-array-elements/1

## Problem Statement
You are given an array arr[] containing positive integers. The elements in the array arr[] range from  1 to n (where n is the size of the array), and some numbers may be repeated or absent. Your have to count the frequency of all numbers in the range 1 to n and return an array of size n such that result[i] represents the frequency of the number i (1-based indexing).

### Constraints
- 1 ≤ arr.size() ≤ 106
- 1 ≤ arr[i] ≤ arr.size()

---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
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
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
arr = list(map(int, input("Enter array elements: ").split()))
n = len(arr)
res = [0] * n

for num in arr:
	res[num - 1] += 1

print(res)
```