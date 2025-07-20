# Problem 7: Reverse a string

**Problem Link:**  
https://www.geeksforgeeks.org/problems/reverse-a-string/1

## Problem Statement
You are given a string s, and your task is to reverse the string.

### Constraints
- 1 <= s.size() <= 10^6
- s contains only alphabetic characters (both uppercase and lowercase).

---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	printf("Enter string: ");
	gets(s);
	int len = strlen(s);

	int start = 0;
	int end = len - 1;

	while (start < end){
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
    		end--;
	}

	printf("Reversed string: %s\n", s);

	return 0;
}
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
s = input("Enter string: ")
print(s[::-1])
```