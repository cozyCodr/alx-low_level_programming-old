#include "main.h"
/**
 * _print_rev - prints string in reverse
 * @s: subject string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len += 1;
		s = s + 1;
	}

	len = len - 1;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len = len - 1;
	}
	_putchar('\n');
}
