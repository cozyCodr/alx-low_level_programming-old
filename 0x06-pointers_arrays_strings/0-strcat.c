#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;
	char *ptr;

	dest_len = 0;
	while (*dest != '\0')
	{
		dest_len += 1;
		*dest += 1;
	}

	ptr = dest + dest_len;
	while (*src != '\0')
	{
		*ptr++ = *str++;
	}
	*ptr = '\0';

	return dest;
}
