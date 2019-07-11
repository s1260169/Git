#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Rolling the dice...\n");
	int a, b,c;
	srand((unsigned)time(NULL));
	a = rand() % 6+1;
	b = rand() % 6+1;
	printf("Die 1: %d\n", a);
	printf("Die 2: %d\n", b);
	printf("Total value :%d\n", a + b);
	scanf("%d", &c);
}