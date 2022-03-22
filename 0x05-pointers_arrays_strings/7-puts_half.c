#include "main.h"
/**
 * puts_half - prints half of the sreing starting from the middle
 * @str: subject string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len;
	int half;

	len = 0;
	while (*str != '\0')
	{
		str += 1;
		len += 1;
	}
	if ((len % 2) == 0)
		half = len / 2;
	else 
		half = (len - 1) / 2;

	while (str[half] != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
