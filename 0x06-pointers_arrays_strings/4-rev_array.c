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
	int array_copy[20];
	int len;
	int i;

	len = n;
	i = 0;

	while (len > 0)
	{
		array_copy[i] = *(a + (len - 1));
		len -= 1;
		i += 1;
	}

	i = 0;
	while (i < 13)
	{
		a[i] = array_copy[i];
		i += 1;
	}
}
