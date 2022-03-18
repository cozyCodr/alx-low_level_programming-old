#include "main.h"
/**
 * _islower - returns 1 if lowercase else returns 0
 * @c: parametre tested if lowercase or not
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
