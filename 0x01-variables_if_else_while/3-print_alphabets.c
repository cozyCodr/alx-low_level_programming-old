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
	c = 'A';
	while ( c <= 'Z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
