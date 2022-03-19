#include "main.h"
#include <stdlib.h>
/**
 * _abs - returns absolute value of integer
 * @c: parameter to be checked
 * Return: absolute value of number
 */
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);
	else
		return (c);
}
