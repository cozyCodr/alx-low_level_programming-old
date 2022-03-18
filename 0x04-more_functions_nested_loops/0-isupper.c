#include "main.h"
/**
 * _islower - returns 1 if uppercase else returns 0
 * @c: parametre tested if uppercase or not
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
