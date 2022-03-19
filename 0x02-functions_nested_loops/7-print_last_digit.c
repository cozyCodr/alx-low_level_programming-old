#include "main.h"
/**
 * print_last_digit - prints last digit in number
 * @ld: param to check last number
 * Return: the last digit of a number
 */
int print_last_digit(int ld)
{
	int ld;
	long store;

	store = ld;
	if (store < 0)
		store *= -1;

	store = store % 10;
	ld = (int)store;
	return (ld);
}
