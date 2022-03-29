#include "main.h"
/**
 * _memset - 
 * @s: pointer to the destination object
 * @b: value to be filled
 * @n: number of bytes to be filled starting from s
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p;

	p = s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return s;
}
