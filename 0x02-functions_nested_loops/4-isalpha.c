#include "main.h"
/**
 * _isalpha - returns 1 if alphabet letter else returns 0
 * @c: parametre tested if part of alphabet or not
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
