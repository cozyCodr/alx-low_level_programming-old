#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: result of comparison
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1 += 1;
		s2 += 1;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
