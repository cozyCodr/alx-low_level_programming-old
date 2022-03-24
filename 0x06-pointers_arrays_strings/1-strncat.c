#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * @n: param n
 * Return: Nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = 0;
	while (*dest != '\0')
	{
		dest_len += 1;
		*dest += 1;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
}
