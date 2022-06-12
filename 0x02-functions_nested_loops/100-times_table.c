#include <stdio.h>
#include "main.h"
/**
 *  print_times_table - prints an n multiplication table
 *  @n: n X n time table
 *  Return: Noting
 */
void print_times_table(int n)
{
	int x;
	int y;
	int result;
	char *res;
	char temp[5];

	if (n == 0)
		printf("0");
	if (n <= 15 && n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				result = x * y;
				sprintf(temp, "%d", result);
				res = temp;
				if (y == n)
				{
					printf("%4s", res);
					putchar('\n');
				}
				else if (y == 0)
					printf("%s,", res);
				else
					printf("%4s,", res);
			}
		}
	}
}
