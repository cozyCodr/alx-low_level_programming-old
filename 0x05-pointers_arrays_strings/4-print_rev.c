#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: subject string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;
	char string[1000];

	len = 0;
	while (*s != '\0')
	{
		string[len] = *s;
		len += 1;
		s += 1;
	}

	len = len - 1;
	while (len >= 0)
	{
		_putchar(string[len]);
		len -= 1;
	}
	_putchar('\n');
}
