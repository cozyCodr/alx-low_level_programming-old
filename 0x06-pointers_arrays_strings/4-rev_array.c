#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - reverses the contents of the array
 * @a: array to reverese
 * @n: size of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int *array_copy;
	int len;
	int pos;
	int i;

	array_copy = _copyString(a);
	len = n;
	pos = len - 1;
	i = 0;

	while (pos >= 0)
	{
		a[i] = array_copy[pos];
		i += 1;
		pos -= 1;
	}
}
/**
 * _copyString - copies string to different memory location
 * @s: string to copy
 * Return: copied string
 */
char* _copyString(char s[])
{
	int i;
	char* s2;

	s2 = (char*)malloc(20);

	for (i = 0; s[i] != '\0'; i++)
	{
		s2[i] = s[i];
	}

	return (char*)s2;
}
