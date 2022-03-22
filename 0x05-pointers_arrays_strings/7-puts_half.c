#include "main.h"
/**
 * puts2 - prints every other character starting with the first one
 * @str: subject string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len;
	int half;

	len = _strlen(str);
	if ((len % 2) == 0)
		half = len / 2;
	else 
		half = (len - 1) / 2;

	while (*(str + half) != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
