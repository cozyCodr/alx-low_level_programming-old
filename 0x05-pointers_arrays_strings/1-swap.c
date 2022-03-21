#include "main.h"
#include <stddef.h>
/**
 * swap_int - swaps values of two integers
 * @a: address of value to swap with b
 * @b: address of value to swap with a
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int *c = NULL;
	
	*c = *a;
	*a = *b;
	*b = *c;
}
