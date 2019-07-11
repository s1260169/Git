#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	char s[20];
	int a, b, c;

	printf("What is your name?\n");
	scanf("%s", s);
	printf("Hello,%s\n", s);

	srand((unsigned)time(NULL));

	printf("Rolling the dice...\n");

	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	c = a + b;
	printf("Dice 1:%d\n", a);
	printf("Dice 2:%d\n", b);
	printf("Total value :%d\n", c);

	if (c >= 8) {
		printf("%s won\n", s);
	}
	else printf("%s lost\n", s);

	return 0;
}