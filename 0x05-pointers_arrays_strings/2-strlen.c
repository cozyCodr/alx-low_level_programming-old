#include "main.h"
/**
 * _strlen - finds length pf string
 * @s: subject string
 * Return: string length
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count += 1;
		s = s + 1;
	}
	return (count);
}
