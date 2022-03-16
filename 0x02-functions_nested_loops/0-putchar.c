#include <string.h>
#include <unistd.h>
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

	while (len < strlen(word))
	{
		_putchar(word[len]);
		len = len + 1;
	}
	_putchar('\n');
	return (0);
}
int _putchar(char c)
{
	return (write( 1, &c, 1));
}
