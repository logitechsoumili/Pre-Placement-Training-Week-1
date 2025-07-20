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