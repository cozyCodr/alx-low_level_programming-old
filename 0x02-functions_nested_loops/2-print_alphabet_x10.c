#include "main.h"
/**
 *  print_alphabet_x10 - prints the letters a to z in 10 rows
 */
void print_alphabet_x10(void)
{
	int start = 0;

	while (start < 10)
	{
		char c = 'a';
		
		while (c <= 'z')
		{
			_putchar(c);
			c = c + 1;
		}
		start = start + 1;
		_putchar('\n');
	}
}
