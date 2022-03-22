#include "main.h"
/**
 * _puts - prints a string to stdout
 * @s: subject string
 * Return: Nothing
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
	}
	_putchar('\n');
}
