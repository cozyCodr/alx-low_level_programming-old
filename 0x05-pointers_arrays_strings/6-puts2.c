#include "main.h"
/**
 * puts2 - prints every other character starting with the first one
 * @str: subject string
 * Return: Nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
