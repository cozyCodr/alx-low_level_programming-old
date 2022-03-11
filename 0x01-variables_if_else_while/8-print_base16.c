#include <stdio.h>
/**
 * main - prints all hex numbers
 * Return: zero if code runs without exception
 */
int main(void)
{
	int c;

	c = 0x30;
	while (c < 0x3A)
	{
		putchar(c);
		c = c + 1;
	}
	c = 0x61;
	while (c < 0x67)
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
