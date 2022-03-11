#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: zero if code runs without exception
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	return (0);
}
