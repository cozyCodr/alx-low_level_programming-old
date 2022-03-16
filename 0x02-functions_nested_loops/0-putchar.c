#include <string.h>
#include "main.h"
/**
 * main - program prints _puchar character by character
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: Always return 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int len = 0;

	while (len < (int)strlen(word))
	{
		_putchar(word[len]);
		len = len + 1;
	}
	_putchar('\n');
	return (0);
}
