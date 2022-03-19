#include "main"
/**
 * print_sign - prints out the sign of argument passed
 * @n: param to be checked for sign
 * Return: 0 if 0, 1 if positive, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_puthcar('+');
		return (1);
	}
	else if (n == 0)
	{	
		_putchar(0);
		return (0);
	}
	_putchar('-');
	return (-1);
}
