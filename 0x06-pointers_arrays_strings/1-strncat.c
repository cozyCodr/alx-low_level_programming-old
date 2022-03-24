#include "main.h"
#include <stdlib.h>
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
	char *dest_copy;

	dest_copy = _copyString(dest);

	dest_len = 0;
	while (*dest_copy != '\0')
	{
		dest_len += 1;
		dest_copy += 1;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
}
/**
 * _copyString - copys a string to a different memory location
 * @s: String to be copied
 * Return: string copied to a new memory location
 */
char* _copyString(char s[])
{
        int i;
        char* s2;

        s2 = (char*)malloc(20);

        for (i = 0; s[i] != '\0'; i++)
                s2[i] = s[i];

        return (char*)s2;
}
