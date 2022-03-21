#include "main.h"
/**
 *
 *
 */
int _strlen(char *s)
{
	int count;
	char x = *s;

	count = 0;
	while ( x != '\0')
	{
		count += 1;
		x = *(x + count);
	}
	return (count);
}
