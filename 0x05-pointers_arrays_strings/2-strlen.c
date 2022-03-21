#include "main.h"
/**
 * _strlen - finds length pf string
 * @s: subject string
 * Return: string length
 */
int _strlen(char *s)
{
	int count;
	char *x = s;

	count = 0;
	while (x != '\0')
	{
		count += 1;
		x = x + 1;
	}
	return (count - x);
}
