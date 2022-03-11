#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - checks if a random number is positive, negative or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negativee", n);
	return (0);
}
