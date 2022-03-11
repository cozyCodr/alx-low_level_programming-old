#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: zero if code runs without exception
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}

