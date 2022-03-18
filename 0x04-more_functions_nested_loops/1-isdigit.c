#include "main.h"
/**
 * _isdigit - returns 1 if digit else returns 0
 * @c: parametre tested if digit or not
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
