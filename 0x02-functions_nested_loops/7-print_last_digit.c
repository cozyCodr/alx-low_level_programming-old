#include "main.h"
/**
 * print_last_digit - prints last digit in number
 * @c: param to check last number
 * Return: the last digit of a number
 */
int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = c % 10;
	return (lastDigit);
}
