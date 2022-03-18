#include "main.h"
#include <string.h>
/**
 * print_numbers - prints numbers 0 to 9 followed by a newline
 */
void print_numbers(void)
{
	char nums[10] = "0123456789";

	for (int x = 0; x < strlen(nums); x++)
	{
		_putchar(nums[x]);
	}
	_putchar('\n');
}
