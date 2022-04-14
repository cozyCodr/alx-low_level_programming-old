#include "function_pointers.h"
#include <stddef.h>
#ifndef NULL
#define NULL ((void *)0)
#endif
/**
 * array_iterator - uses passed function pointer to print each item in arry
 * @array: array containing items to be printed
 * @size: size of array
 * @action: function to be called on array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL || array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
