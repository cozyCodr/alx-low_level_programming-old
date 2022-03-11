#include <stdio.h>
/**
 * main - prints numbers 0-9
 * Return: zero if code runs without exception
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
