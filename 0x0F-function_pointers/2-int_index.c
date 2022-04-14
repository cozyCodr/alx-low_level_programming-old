#include "function_pointers.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
		}
	}
	return (-1);
}
