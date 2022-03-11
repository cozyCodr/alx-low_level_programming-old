#include <stdio.h>
/**
 * main - prints numbers 0-9
 * Return: zero if code runs without exception
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
