#include <stdio.h>
int main() {
	char s[20];
	printf("What is your name?\n");
	scanf("%s", s);
	printf("Hello,%s\n", s);
	return 0;
}