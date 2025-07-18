# Problem 3: Find second largest element

**Problem Link:**  
https://www.geeksforgeeks.org/problems/second-largest3735/1

## Problem Statement
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

### Constraints
- 2 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i] ≤ 10^5

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

    int max = arr[0], second = -1;

    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++){
        if (arr[i] != max){
            if (second == -1 || arr[i] > second){
                second = arr[i];
            }
        }
    }

    if (second == -1){
        printf("No second largest element.\n");
    } else {
        printf("Second Largest element: %d\n", second);
    }

    return 0;
}
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
arr = list(map(int, input("Enter array elements: ").split()))
arr = list(set(arr))
arr.sort()
if len(arr) == 1:
	print(-1)
else:
	print(arr[-2])
```