#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: subject string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;
	int rsl;
	char string[1000];
	char revstring[1000];

	len = 0;
	while (*s != '\0')
	{
		string[len] = *s;
		len += 1;
		s += 1;
	}

	len = len - 1;
	rsl = 0;
	while (len >= 0)
	{
		revstring[rsl] = string[len];
		rsl += 1;
		len -= 1;
	}
	*s = revstring;
}
