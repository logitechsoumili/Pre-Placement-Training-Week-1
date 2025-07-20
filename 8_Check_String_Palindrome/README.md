# Problem 8: Check if string is palindrome

**Problem Link:**  
https://www.geeksforgeeks.org/problems/palindrome-string0817/1

## Problem Statement
You are given a string s. Your task is to determine if the string is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards.

### Constraints
- 1 ≤ s.size() ≤ 106
- The string s contains only lowercase letters (a-z).

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
	char rev[len + 1];
	
	for (int i = 0; i < len; i++){
		rev[i] = s[len - 1 - i];
	}
	rev[len] = '\0';

	if (strcmp(rev, s) == 0)
    		printf("true\n");
	else
    		printf("false\n");

	
	return 0;
}
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
s = input("Enter a string: ")
rev = s[::-1]
if rev == s:
	print("true")
else:
	print("false")
```