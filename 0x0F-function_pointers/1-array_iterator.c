#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - uses passed function pointer to print each item in arry
 * @array: array containing items to be printed
 * @size: size of array
 * @action: function to be called on array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != ((void *)0))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
