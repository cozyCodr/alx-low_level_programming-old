#include <string.h>
#include "_putchar.c"
/**
 * main - prints the text putchar 
 *
 * Return: Always 0
 */
int main(void)
{
	char putString[8] = "_putchar";
	int len = 0;
	while (len < strlen(putString))
	{
		_putchar(putString[len]);
		len = len + 1;
	}
	_putchar('\n');
	return (0);
}
