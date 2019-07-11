#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i, j, k;

	srand((unsigned)time(NULL));

	printf("Rolling the dicec\n");

	i = rand() % 6 + 1;
	j = rand() % 6 + 1;
	k = i + j;
	printf("Dice 1:%d\n", i);
	printf("Dice 2:%d\n", j);
	printf("Total value :%d\n", k);

	if (k >= 7) {
		printf("You won\n");
	}
	else printf("You lost\n");

	return 0;
}