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